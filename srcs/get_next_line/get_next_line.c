/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:45:16 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/21 15:01:07 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_buflist(const int fd, t_list **list)
{
	t_list	*plist;

	plist = *list;
	while (plist)
	{
		if (plist->content_size == (size_t)fd)
			return (plist);
		plist = plist->next;
	}
	plist = ft_lstnew_i(NULL, 0);
	if (!plist)
		return (NULL);
	plist->content = ft_strnew_i (0);
	if (!(plist->content))
	{
		free(plist);
		return (NULL);
	}
	plist->content_size = (size_t)fd;
	ft_lstadd(list, plist);
	return (plist);
}

static int	read_line(char **buf, int fd)
{
	int		readbytes;
	char	*copy_buf;
	char	*readbuf;

	readbuf = ft_strnew_i(GNL_BUFF_SIZE);
	if (!readbuf)
		return (-1);
	readbytes = read(fd, readbuf, GNL_BUFF_SIZE);
	while (readbytes)
	{
		if (readbytes == -1)
			return (-1);
		readbuf[readbytes] = '\0';
		copy_buf = ft_strjoin(*buf, readbuf);
		if (!copy_buf)
			return (-1);
		free(*buf);
		*buf = copy_buf;
		if (ft_strchr(readbuf, 10))
			break ;
	}
	free(readbuf);
	return (readbytes);
}

static char	*get_line(char **buf, char *pos_chr)
{
	char	*copy_buf;
	char	*line;

	if (pos_chr)
		*pos_chr = '\0';
	line = ft_strdup(*buf);
	if (!line)
		return (NULL);
	copy_buf = ft_strdup(!pos_chr ? ft_strchr(*buf, 0) : pos_chr + 1);
	if (!copy_buf)
	{
		free(line);
		return (NULL);
	}
	free(*buf);
	*buf = copy_buf;
	return (line);
}

int	get_next_line(const int fd, char **line)
{
	static t_list		*list;
	t_list				*buflist;
	char				*pos_chr;
	int					fr;

	if (fd == -1)
		return (-1);
	buflist = get_buflist(fd, &list);
	pos_chr = ft_strchr((char *)buflist->content, 10);
	if (pos_chr)
	{
		*line = get_line((char **)&(buflist->content), pos_chr);
		if (!*line)
			return (-1);
		return (1);
	}
	fr = read_line((char **)&(buflist->content), fd);
	if (fr == -1)
		return (-1);
	if (!*((char *)buflist->content) && !fr)
		return (0);
	*line = get_line((char **)&(buflist->content),
			ft_strchr((char *)buflist->content, 10));
	if (!*line)
		return (-1);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:49:21 by jde-alme          #+#    #+#             */
/*   Updated: 2022/03/23 20:22:54 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void	ft_putchar_fd(char c, int fd);

int		ft_isdigit(int c);
int		ft_tolower(int c);

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);

#endif

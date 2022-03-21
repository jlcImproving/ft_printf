/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:03:04 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/21 16:06:15 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_i(void const *content, size_t content_size)
{
	t_list		*list;

	list = ((t_list *)malloc(sizeof(t_list)));
	if (!list)
		return (NULL);
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		return (list);
	}
	else
	{
		list->content = malloc(content_size);
		if (list->content == NULL)
		{
			free(list);
			return (NULL);
		}
		list->content_size = content_size;
		ft_memcpy(list->content, content, content_size);
	}
	list->next = NULL;
	return (list);
}

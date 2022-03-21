/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:41:58 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 14:42:11 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_pathcmp(char *p1, char *p2)
{
	while (*p1 && *p1 == *p2)
	{
		p1++;
		p2++;
		if (*p1 == '/' || *p2 == '/')
		{
			while (*p1 == '/')
				p1++;
			while (*p2 == '/')
				p2++;
			continue ;
		}
	}
	return (*p1 - *p2);
}
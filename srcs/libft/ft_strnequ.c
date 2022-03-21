/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:07:18 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 14:07:56 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	i = n;
	if ((!s1 && !s2) || !n)
		return (1);
	if (s1 && s2 && n)
	{
		while (i != 0)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
			i--;
		}
	}
	return (1);
}
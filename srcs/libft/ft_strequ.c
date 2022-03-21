/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:06:50 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 14:07:06 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (1);
	if (s1 && s2)
	{
		while (*s1 != '\0' || *s2 != '\0')
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:54:15 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/20 21:28:29 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				count;
	unsigned char	*s2;

	count = 0;
	s2 = (unsigned char *)s;
	while (n-- > 0)
	{
		if (s2[count] == (unsigned char)c)
			return (s2 + count);
		else
			count++;
	}
	return (NULL);
}

/*
DESCRIPTION
     The memchr() function locates the first occurrence of c 
	 (converted to an unsigned char) in string s.
*/
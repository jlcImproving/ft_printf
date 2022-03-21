/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:18:25 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/21 18:48:20 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*sorc;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	sorc = src;
	while (n-- > 0)
		*dest++ = *sorc++;
	return (dst);
}

/*
DESCRIPTION
     The memcpy() function copies n bytes from memory area src to 
	 memory area dst.  If dst and src over-lap, behavior is undefined.
	 Applications in which dst and src might overlap should use 
	 memmove(3) instead.
*/
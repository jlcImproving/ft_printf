/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:52:41 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/21 16:10:24 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;
	unsigned int	i;

	pointer1 = (unsigned char *)dst;
	pointer2 = (unsigned char *)src;
	i = 0;
	while (n)
	{
		pointer1[i] = pointer2[i];
		if (pointer1[i] == (unsigned char)c)
			return (pointer1 + i + 1);
		n--;
		i++;
	}
	return (NULL);
}

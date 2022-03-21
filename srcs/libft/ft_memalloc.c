/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:29:27 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/20 21:28:10 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*set(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = -1;
	a = b;
	while (++i < len)
		a[i] = (unsigned char)c;
	return (b);
}

void	*ft_memalloc(size_t size)
{
	void			*f;

	f = malloc(size);
	if (!f)
		return (NULL);
	set(f, 0, size);
	return (f);
}

/*
The malloc() function reserves a block of memory of the specified 
number of bytes. And, it returns a pointer of void which can be 
casted into pointers of any form.
*/

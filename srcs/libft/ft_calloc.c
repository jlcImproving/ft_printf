/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:54:41 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/21 18:48:46 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memp;

	memp = (char *)malloc(size * count);
	if (!memp)
		return (NULL);
	ft_bzero(memp, count * size);
	return (memp);
}

/*
The calloc() in C is a function used to allocate multiple blocks 
of memory having the same size. It is a dynamic memory allocation 
function that allocates the memory space to complex data structures 
such as arrays and structures and returns a void pointer to the memory.
Calloc stands for contiguous allocation.

Malloc function is used to allocate a single block of memory space 
while the calloc function in C is used to allocate multiple blocks 
of memory space. Each block allocated by the calloc in C programming 
is of the same size.
The above statement example of calloc in C is used to allocate n memory
blocks of the same size.
After the memory space is allocated, then all the bytes are initialized
to zero.
The pointer which is currently at the first byte of the allocated 
memory space is returned.
*/
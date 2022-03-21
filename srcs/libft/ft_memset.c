/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:47:00 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/20 21:29:50 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = -1;
	a = b;
	while (++i < len)
		a[i] = (unsigned char)c;
	return (b);
}

/*
memset leva três argumentos:

O endereço da memória.
Byte constante para preencher a memória.
O número de bytes a serem substituídos.
memset retorna um ponteiro para a área de memória e pode ser usado 
em chamadas de função em cadeia.
*/
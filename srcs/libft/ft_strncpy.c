/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:55:14 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 13:55:18 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t n)
{
	char	*pointer1;
	int		i;
	int		len;

	pointer1 = destination;
	i = 0;
	len = n;
	if (len == 0)
		return (pointer1);
	while (source[i] != '\0' && i < len)
	{
		pointer1[i] = source[i];
		i++;
	}
	pointer1[i] = '\0';
	return (pointer1);
}

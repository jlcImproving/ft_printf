/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:54:05 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 13:54:20 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *destination, const char *source)
{
	int		i;
	char	*pointer1;

	if (!source)
		return (destination);
	i = 0;
	pointer1 = destination;
	while (source[i] != '\0')
	{
		pointer1[i] = source[i];
		i++;
	}
	pointer1[i] = '\0';
	return (pointer1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:54:05 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/21 16:15:27 by jde-alme         ###   ########.fr       */
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

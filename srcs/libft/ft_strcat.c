/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:57:27 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 13:58:09 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destination, const char *arr)
{
	char	*pointer;
	int		i;
	int		j;

	pointer = destination;
	i = 0;
	if (!arr)
		return (pointer);
	while (pointer[i] != '\0')
		i++;
	j = 0;
	while (arr[j] != '\0')
	{
		pointer[i] = arr[j];
		i++;
		j++;
	}
	pointer[i] = '\0';
	return (pointer);
}

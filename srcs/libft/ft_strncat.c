/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:56:02 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 13:56:08 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destination, const char *append, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (destination[i] != '\0')
		i++;
	j = 0;
	while (j < n && append[j] != '\0')
	{
		destination[i] = append[j];
		j++;
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

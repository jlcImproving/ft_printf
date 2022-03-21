/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:00:24 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 14:00:41 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*arr;

	if (size >= 9223372036854775807)
		return (NULL);
	arr = (char*)malloc(sizeof(char) * (size + 1));
	if (!arr)
		return (NULL);
	arr[size] = '\0';
	while (size--)
		arr[size] = '\0';
	return (arr);
}

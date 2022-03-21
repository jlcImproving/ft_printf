/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:00:24 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/21 16:31:12 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*arr;

	if (size >= 9223372036854775807)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * (size + 1));
	if (!arr)
		return (NULL);
	arr[size] = '\0';
	while (size--)
		arr[size] = '\0';
	return (arr);
}

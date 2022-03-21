/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:17:07 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/21 18:57:34 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*strjoin;
	size_t				i;
	size_t				j;

	if (!s1)
		return (NULL);
	strjoin = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (strjoin == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		strjoin[i + j] = s2[j];
		j++;
	}
	strjoin[i + j] = '\0';
	return (strjoin);
}

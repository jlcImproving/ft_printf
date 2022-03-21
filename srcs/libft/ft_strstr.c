/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:58:26 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 13:59:02 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string1, const char *string2)
{
	int	i;
	int j;
	int k;
	int	l;

	k = 0;
	i = 0;
	l = 0;
	if (*string2 == '\0')
		return ((char*)string1);
	while (string1[i] != '\0')
	{
		k = 0;
		j = i;
		l = i;
		while (string1[l] == string2[k])
		{
			if (string2[k + 1] == '\0')
				return ((char*)&string1[j]);
			k++;
			l++;
		}
		i++;
	}
	return (NULL);
}

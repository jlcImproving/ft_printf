/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:09:55 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/21 18:53:33 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		substr = (char *)malloc(sizeof(char));
	else if (ft_strlen(s) < len)
		return (ft_strdup((char *)s + start));
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	j = 0;
	while (s[start] != '\0')
	{
		if (start < ft_strlen(s) && j < len)
		{
			substr[j] = s[start];
			j++;
		}
		start++;
	}
	substr[j] = '\0';
	return (substr);
}

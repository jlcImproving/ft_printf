/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:35:13 by jde-alme          #+#    #+#             */
/*   Updated: 2021/11/15 20:43:19 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int	size;
	int	i;

	if (!*need)
		return ((char *)hay);
	size = ft_strlen(need);
	while (*hay && len)
	{
		i = 0;
		while (*hay && hay[i] == need[i] && len - i)
		{
			if (i + 1 == size)
				return ((char *)hay);
			i++;
		}
		hay++;
		len--;
	}
	return (0);
}

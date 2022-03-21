/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:44:21 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/20 20:06:13 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	while (*t != (unsigned char)c)
	{
		if (*t == '\0')
			return (NULL);
		t++;
	}
	return (t);
}

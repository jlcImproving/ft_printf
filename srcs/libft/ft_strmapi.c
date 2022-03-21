/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:34:52 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/10 19:38:59 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fr;
	size_t	len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	fr = malloc((len + 1) * sizeof(char));
	if (fr == NULL )
		return (NULL);
	fr[len] = '\0';
	while (s[i] != '\0')
	{
		fr[i] = (*f)(i, s[i]);
		i++;
	}
	return (fr);
}

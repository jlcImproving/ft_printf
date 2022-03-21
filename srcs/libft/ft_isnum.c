/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:44:15 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 14:44:26 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnum(const char *str)
{
	int		i;
	char	is_dig;

	i = -1;
	is_dig = 0;
	while (str[++i])
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			if (!ft_isdigit(str[++i]))
				return (0);
		if (ft_isdigit(str[i]))
			is_dig = 1;
		else if (ft_isspace(str[i]))
		{
			while (ft_isspace(str[i]))
				++i;
			str = str + i;
			i = -1;
		}
		else
			return (0);
	}
	return (is_dig);
}

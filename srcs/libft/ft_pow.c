/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:42:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 14:42:35 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_pow(double num, short pow)
{
	unsigned short	i;
	char			is_minus;
	double			res;

	is_minus = 0;
	if (pow < 0)
	{
		is_minus = 1;
		pow *= -1;
	}
	i = 0;
	res = 1;
	while (i < pow)
	{
		res *= num;
		++i;
	}
	if (is_minus)
		res = 1 / res;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:43:22 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/18 17:01:11 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_treat_percent(t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (flags.minus == 1)
		char_count += ft_putstrprec("%", 1);
	char_count += ft_treat_width(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		char_count += ft_putstrprec("%", 1);
	return (char_count);
}

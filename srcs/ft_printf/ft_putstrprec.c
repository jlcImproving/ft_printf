/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrprec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:38:42 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/18 16:58:28 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstrprec(char *str, int prec)
{
	int	char_count;

	char_count = 0;
	while (str[char_count] && char_count < prec)
		ft_putchar(str[char_count++]);
	return (char_count);
}

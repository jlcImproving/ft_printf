/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:00:20 by jde-alme          #+#    #+#             */
/*   Updated: 2022/02/10 17:53:13 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *type, ...)
{
	va_list	args;
	char	*chr;
	int		i;
	int		c;

	chr = (char *)type;
	i = 0;
	c = 0;
	va_start(args, type);
	while (type[i])
	{
		if (chr[i] == '%')
		{
			i++;
			if (chr[i] == 'c')
			{
				printf("%c", va_arg(args, int));
				i++;
				c++;
			}
		}
		else
		{
			printf("%c", chr[i]);
			i++;
			c++;
		}
	}
	va_end(args);
	return (c);
}

int	main(void)
{
	int	len;

	len = ft_printf("Meu > Hello %c %c %c D", 'W', 'O', 'R');
	printf("\nlen :%d", len);
	printf("\nlen: %d", printf("\nOriginal > Hello %c %c %c D", 'W', 'O', 'R'));
	// printf("Sum of 10, 20 and 30 = %d\n", sum(3, 10, 20, 30));
	// printf("Sum of 4, 20, 25 and 30 = %d\n", sum(4, 4, 20, 25, 30));
	return (0);
}

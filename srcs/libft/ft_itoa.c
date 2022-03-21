/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:36:34 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/20 23:31:19 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int	ft_len(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	n = -n;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		c;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
		i = 1;
	c = ft_len(n) + i;
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (0);
	if (n < 0)
		str[0] = '-';
	str[c] = '\0';
	n = n * (((n < 0) * -2) + 1);
	while (c-- != i)
	{
		str[c] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

/*
int	main(void)
{
	char	*dest;
	int		nbr;

	nbr = 6738573;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
	nbr = -6738573;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
	nbr = 54125485;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
	nbr = 0;
	dest = ft_itoa(nbr);
	printf("Res: <%s> Num: <%d>\n", dest, nbr);
}
*/

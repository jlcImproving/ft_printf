/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:48:10 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/20 21:26:46 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	int				finish;

	sign = 1;
	finish = 0;
	while (*str == '\r' || *str == '\f'
		|| *str == '\v' || *str == '\t'
		|| *str == '\n' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		finish = (finish * 10) + ((int)*str++ - '0');
	return (sign * finish);
}
/*
DESCRIPTION: 
The C library function int atoi(const char *str) 
converts the string argument str to an integer (type int).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
*/
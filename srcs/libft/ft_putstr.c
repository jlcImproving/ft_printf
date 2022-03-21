/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:11:19 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/03/13 14:11:32 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;
	int		res;

	if (s)
	{
		i = ft_strlen(s);
		res = write(1, s, i);
		if (res == -1)
			return ;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:50:39 by jde-alme          #+#    #+#             */
/*   Updated: 2021/12/20 21:27:52 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lref;

	if (*lst)
	{
		lref = ft_lstlast(*lst);
		lref->next = new;
	}
	else if (lst && !(*(lst)))
		*lst = new;
}

/*
This function returns a direct reference to the last element 
in the list container
*/
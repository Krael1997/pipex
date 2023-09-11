/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:39:38 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:10 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 *	- ft_lstadd_back - Add the node 'new' to the end of the list 'lst'.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!lst || !new)
		return ;
	aux = *lst;
	if (*lst)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*lst = new;
}

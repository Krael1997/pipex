/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:39:48 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:13 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 *	ft_lstclear - delete and free the node 'lst' and all nodes consecutives,
 *	using the function 'del' and free.
 *	In the end, the point of the list should be NULL.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (lst && *lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:40:01 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:20 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 *	ft_lstmap.c - Iter the list 'lst' and apply the function 'f' to the content
 *	of each node.
 *	Create a list of the apply correctly and success the function 'f'
 *	in every node.
 *	The function 'del' works for delete the content of the node.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *f), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	new_lst = NULL;
	while (lst && f)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:39:42 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:11 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 *	ft_lstadd_front - Add the node 'new' to the start of the list 'lst'.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
		new->next = *lst;
	if (new)
		*lst = new;
}

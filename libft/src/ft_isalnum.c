/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:33:29 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:50:57 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 ** ft_isalnum - Function that checks if 'c' is an alphanumeric 
 ** (alphabetical or number) character.
 */

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

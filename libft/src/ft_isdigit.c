/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:32:32 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:03 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 * ft_isdigit - Function that checks if 'c' is a digit (0 through 9)
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

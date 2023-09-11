/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:35:55 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:00 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 * ft_isascii - This function checks if 'c' parameter is an ASCII character.
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

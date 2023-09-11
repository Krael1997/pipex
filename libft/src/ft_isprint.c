/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:37:22 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:06 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 * ft_isprint - This function checks if 'c' is a printable character.
 */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:25:05 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:50:58 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdio.h>
#include <ctype.h>

/*
 ** ft_isalpha - Function that checks if 'c' is an alphabetic character
 */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
int	main()
{
	char	c;
	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));

	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
	
	c = '+';
	printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));

	return (0);
}
*/

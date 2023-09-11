/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:45:21 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:50:47 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdio.h>

/*
** ft_isspace - This auxiliar function checks if the character received
** by parameter is a space or not.
** (' ', '\f', '\n', '\r', '\t', '\v')
*/

int	ft_isdigit(int c);

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

/*
** ft_atoi - convert a string to an integer
** Function that converts a received as a parameter string to a integer
*/

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign *= -1;
	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += *nptr++ - '0';
	}
	return (result * sign);
}

/*
int	main()
{
	char* S=" ---1234567890a";
	printf("%d\n", atoi(S));
	return (0);
}
*/

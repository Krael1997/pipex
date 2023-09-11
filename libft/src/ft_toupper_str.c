/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:01:19 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 19:01:59 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_toupper_str(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (len--)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

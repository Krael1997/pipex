/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:56:59 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 20:00:49 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_printf(const char *str, ...)
{
	t_block	b;

	ft_bzero(&b, sizeof(b));
	va_start(b.ap, str);
	while (str[b.i])
	{
		if (str[b.i] != '%')
			b.ret += write(1, &str[b.i++], 1);
		else
		{
			(b.i)++;
			reset_block_pf(&b);
			checkflags_pf(str, &b);
			checktypes_pf(str, &b);
		}
	}
	va_end(b.ap);
	reset_block_pf(&b);
	return (b.ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_converter_csp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:03:48 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 20:01:19 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_converter_cs(char type, t_block *b)
{
	int		tempc;
	char	*temps;

	b->type = type;
	if (b->type == 'c')
	{
		tempc = va_arg(b->ap, int);
		print_char_pf((char)tempc, b);
	}
	else if (b->type == 's')
	{
		temps = va_arg(b->ap, char *);
		if (!temps)
			return (print_null_pf(b));
		b->s = ft_strdup((char *)temps);
		print_str_pf(b);
	}
	else if (b->type == '%')
		print_char_pf('%', b);
}

void	ft_converter_p(t_block *b)
{
	unsigned long	addr;

	addr = (unsigned long)va_arg(b->ap, void *);
	b->ret += write(1, "0x", 2);
	if (!addr)
		b->s = ft_strdup("0");
	else
		b->s = ft_itoa_base(addr, 16);
	print_dig_pf(b);
}

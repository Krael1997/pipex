/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:55:16 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:40 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
 *	ft_putchar_fd - Outputs the character 'c' to the given file descpritor.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

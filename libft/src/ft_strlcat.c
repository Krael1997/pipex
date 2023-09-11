/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:57:17 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:52:01 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static size_t	ft_min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}

/*
 * ft_strlcat - size-bounded string copying and concatenation
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	result;

	i = 0;
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	result = src_len + ft_min(dst_len, size);
	if (size == 0)
		return (result);
	while (src[i] && dst_len + i < size - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (result);
}

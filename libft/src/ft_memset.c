/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:38:26 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:38 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdio.h>
#include <string.h>

/*
 * ft_memset - fill memory with a constant byte
 */

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	while (n-- > 0)
	{
		*ptr++ = c;
	}
	return (dest);
}

/*
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',2);
   puts(str);
   
   return(0);
}
*/
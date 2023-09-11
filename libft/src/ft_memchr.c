/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:36:09 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:28 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdio.h>
#include <string.h>

/*
 ** ft_memchr - This function scans the first 'n' bytes of 's' for 
 ** the first occurrence of 'c'.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}

/*
 * MAIN
 *
  int main()
  {
   char cadena[] = "Erase una vez...";
   char *puntero; 
 
   puntero = (char *)memchr(cadena, 'e', 7);
   printf( "%s\n", cadena); 
   printf( "%s\n", puntero ); 
 
   return 0;
}
*/
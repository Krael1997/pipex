/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:38:27 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:51:31 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdio.h>
#include <string.h>

/*
 ** ft_memcmp - This function compares the first 'n' bytes 
 ** (each interpreted as unsignedchar) of the memory areas 's1' & 's2'.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1p;
	const unsigned char	*s2p;

	s1p = (const unsigned char *)s1;
	s2p = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s1p != *s2p)
			return (*s1p - *s2p);
		s1p++;
		s2p++;
	}
	return (0);
}

/*

int main()
{
   char a[3] = { 82, 81, 84 };
   char b[3] = { 85, 83, 86 };
   int i;

   for( i=0; i<3; i++ )
     printf( "a[%d]=%c ", i, a[i] );
   printf( "\n" );
   for( i=0; i<3; i++ )
     printf( "b[%d]=%c ", i, b[i] );
   printf( "\n" );

   i = memcmp( a, b, 4 );
   printf( "a es " );
   if( i < 0 )  printf( "menor que" );
   else if( i > 0 )  printf( "mayor que" );
   else  printf( "igual a" );
   printf( " b\n" );

   return 0;
}

*/
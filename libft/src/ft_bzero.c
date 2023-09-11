/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelrodr <abelrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:37:19 by abelrodr          #+#    #+#             */
/*   Updated: 2023/09/04 18:50:53 by abelrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** ft_bzero - This function erases the data in the 'n' bytes of the memory
** starting at the location pointed by 's', writing zeroes.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int main( void )
  {
    char buffer[80];

    ft_bzero(buffer, 80);
    return (EXIT_SUCCESS);
  }
*/
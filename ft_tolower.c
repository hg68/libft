/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:29:49 by hgill             #+#    #+#             */
/*   Updated: 2022/03/01 15:34:02 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char str[] = "UPPERCASE";

   while(str[i])
   {
      putchar (ft_tolower(str[i]));
      i++;
   }

   return(0);
}*/

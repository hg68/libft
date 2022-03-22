/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:20:04 by hgill             #+#    #+#             */
/*   Updated: 2022/03/01 15:26:12 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char str[] = "Tutorials Point";

   while(str[i]) 
   {
      putchar (ft_toupper(str[i]));
      i++;
   }

   return(0);
}*/

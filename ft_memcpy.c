/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:44:47 by hgill             #+#    #+#             */
/*   Updated: 2022/03/21 13:17:53 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main () 
{
   const char src[50] = "123456!";
   char dest[50];
   strcpy(dest,"abcdef?");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 7);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}*/

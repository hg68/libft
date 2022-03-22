/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:08:31 by hgill             #+#    #+#             */
/*   Updated: 2022/03/04 16:40:06 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main () 
{
   const char str[] = "to.mato.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after %c is = %s\n", ch, ret);

   return(0);
}*/

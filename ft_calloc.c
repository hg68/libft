/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:12:12 by hgill             #+#    #+#             */
/*   Updated: 2022/03/08 14:24:50 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}

/*#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );

   return(0);
}*/

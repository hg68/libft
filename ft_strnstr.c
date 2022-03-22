/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:42:35 by hgill             #+#    #+#             */
/*   Updated: 2022/03/22 11:08:59 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strnstr() function locates the first occurrence of the null-terminated
//string needle in the string haystack, where not more than len characters
//are searched. Characters that appear after a `\0' character are not searched.
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "f";
    char* p;

    // Find first occurrence of s2 in s1
    p = ft_strnstr(s1, s2, 6);

    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");

    return 0;
}*/

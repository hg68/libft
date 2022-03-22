/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:23:59 by hgill             #+#    #+#             */
/*   Updated: 2022/03/22 12:10:17 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	newstr = (char *)malloc(len + 1);
	if (!s || !newstr)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		newstr[j++] = s[i++];
	newstr[j] = '\0';
	return (newstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:39:37 by hgill             #+#    #+#             */
/*   Updated: 2022/02/28 15:46:28 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i]) == '\n' || (str[i]) == ' ' || (str[i]) == '\t'
		|| (str[i]) == '\v' || (str[i]) == '\f' || (str[i]) == '\r')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
				sign *= -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("    -2147"));
}*/

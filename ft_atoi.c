/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:51:27 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:28:50 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_atoi(const char *nptr)
{
	size_t	index;
	int		sign;
	int		value;

	index = 0;
	sign = 1;
	value = 0;
	while (nptr[index])
	{
		if (nptr[index] == '-')
			sign *= -1;
		if (nptr[index] >= '0' && nptr[index] <= '9')
			value = (10 * value) + (nptr[index] - '0');
		index++;
	}
	return (value * sign);
}
/*
int main()
{
	char str[]="-3198";
	const char *np=str;
	printf("%d",ft_atoi(np));
}
*/

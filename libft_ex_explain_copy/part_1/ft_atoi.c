/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:51:27 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 09:37:55 by omajarad         ###   ########.fr       */
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
	while ((nptr[index] == ' ') || (nptr[index] >= 9 && nptr[index] <= 13))
		index++;
	if (nptr[index] == '+' || nptr[index] == '-')
	{
		if (nptr[index] == '-')
			sign = -sign;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		value = (10 * value) + (nptr[index] - '0');
		index++;
	}
	return (value * sign);
}

int main()
{
	char str[]="-3198";
	const char *np=str;
	printf("%d",ft_atoi(np));
}

/*
// 1. Skip whitespace
while (whitespace)
    index++;

// 2. Read ONE optional sign
if (nptr[index] == '+' || nptr[index] == '-')
{
    if (nptr[index] == '-')
        sign = -1;
    index++;
}

// 3. Read digits until something else appears
while (nptr[index] >= '0' && nptr[index] <= '9')
{
    value = value * 10 + (nptr[index] - '0');
    index++;
}
One important detail: atoi does not return 0 whenever it encounters a non-number. It returns 0 specifically when it doesn't manage to convert any digits.

So:

"abc123"   → 0
"123abc"   → 123
*/

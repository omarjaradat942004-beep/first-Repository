/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:30:30 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:43:43 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

void	is_neg(size_t *counter, int *neg, int *n, long *copy)
{
	if ((long)*n < 0)
	{
		(*counter)++;
		(*neg) = -(*neg);
		*n = -*n;
		*copy = -*copy;
	}
	else
		*neg = *neg;
}

size_t	num_counter(int n, size_t *counter)
{
	while ((long)n > 9)
	{
		(*counter)++;
		n /= 10;
	}
	(*counter)++;
	return (*counter);
}

char	*ft_itoa(int n)
{
	int			neg;
	char		*ptr;
	size_t		counter;
	long		copy;
	int			index;

	neg = 1;
	copy = n;
	counter = 0;
	is_neg(&counter, &neg, &n, &copy);
	counter = num_counter(n, &counter);
	ptr = malloc(sizeof(char) * (counter + 1));
	if (!ptr)
		return (NULL);
	index = counter - 1;
	while (index >= 0)
	{
		ptr[index] = (copy % 10) + '0';
		copy /= 10;
		index--;
	}
	if (neg == -1)
		ptr[0] = '-';
	ptr[counter] = '\0';
	return (ptr);
}
/*
int main()
{
	int num = -2740;
	printf("%s",ft_itoa(num));
}
*/

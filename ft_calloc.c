/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:26:33 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:29:58 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
void	*ft_calloc(size_t n, size_t size)
{
	size_t			index;
	unsigned char	*ptr;

	if (n == 0 || size == 0)
		return (NULL);
	ptr = malloc(n * size);
	index = 0;
	while (index < (size * n))
	{
		ptr[index] = 0;
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
/*
int main()
{
	size_t	elements_number = 5;
	size_t	size = 4;
	printf("%p",ft_calloc(elements_number, size));
	
	index = 0;
        while (index < (size * n))
        {
                printf("%d-",ptr[index]);
                index++;
        }
	
}
*/

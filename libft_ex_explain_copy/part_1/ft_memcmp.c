/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:36:51 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 11:38:34 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	index = 0;
	ptr1 = (unsigned char *)(s1);
	ptr2 = (unsigned char *)(s2);
	while (index < n)
	{
		if (ptr1[index] != ptr2[index])
		{
			return (ptr1[index] - ptr2[index]);
		}
		index++;
	}
	return (0);
}
/*
int main()
{
	char str[]="amar zradat";
	void *ptr1=str;
	void *ptr2=str+5;
	size_t size=5;
	printf("%d",ft_memcmp(ptr1,ptr2,size));
}
*/

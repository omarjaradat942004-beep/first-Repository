/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 15:16:27 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:36:03 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (index < (size - 1))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	index = 0;
	while (src[index])
	{
		index++;
	}
	return (index);
}
/*
int main()
{
	char str1[]="omar 2004";
	size_t size=4;
	char str2[size];
	char *ptr1=str1;
	char *ptr2=str2;
	printf("%ld\n",ft_strlcpy(ptr2,ptr1,size));
	printf("%s",str2);
}
*/

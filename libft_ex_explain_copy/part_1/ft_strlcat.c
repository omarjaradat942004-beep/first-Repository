/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 15:43:15 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 12:55:57 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
static size_t	src_length(const char *sourc, size_t index2_of)
{
	while (sourc[index2_of])
	{
		index2_of++;
	}
	return (index2_of);
}

static size_t	dst_length(char *dest, size_t index_of, size_t size_of)
{
	while ((index_of < size_of) && dest[index_of] != '\0')
	{
		index_of++;
	}
	return (index_of);
}

static void	if_there_space(char *dest, size_t index_of, size_t size_of)
{
	if (index_of < size_of)
	{
		dest[index_of] = '\0';
	}
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	index2;
	size_t	size_append;
	size_t	size_return;

	index = 0;
	index2 = 0;
	index = dst_length(dst, index, size);
	index2 = src_length(src, index2);
	if (index == size)
	{
		return (size + index2);
	}
	size_return = index + index2;
	size_append = (size - index - 1);
	index2 = 0;
	while (index2 < size_append && (src[index2]))
	{
		dst[index] = src[index2];
		index++;
		index2++;
	}
	if_there_space(dst, index, size);
	return (size_return);
}
/*
int main()
{
        char str1[]="jaradat";
        size_t size=4;
        char str2[20]="omar";
        char *ptr1=str1;
        char *ptr2=str2;
        printf("%zu\n",ft_strlcat(ptr2,ptr1,size));
        printf("%s",str2);
}
*/

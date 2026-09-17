/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:27:15 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:34:36 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr3;
	unsigned char	*ptr4;
	size_t			index;

	index = 0;
	ptr3 = (unsigned char *)(src);
	ptr4 = (unsigned char *)(dest);
	while (index < n)
	{
		ptr4[index] = ptr3[index];
		index++;
	}
	return (ptr4);
}
/*
int main()
{
	char str1[]="omar jaradat";
	//char str2[]="smai ali";
	void *ptr1=str1;
	void *ptr2=str1+5;
	size_t size=4;
	printf("%p",ft_memcpy(ptr2,ptr1,size));

	int index = 0;
        while (index < (int)size)
        {
                printf("%c-",str1[index]);
                index++;
        }
}
*/

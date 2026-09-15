/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:23:14 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:40:57 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr3;
	unsigned char	*ptr4;
	size_t			index;

	index = 0;
	ptr3 = (unsigned char *)(src);
	ptr4 = (unsigned char *)(dest);
	if (ptr3 > ptr4)
	{
		while (index < n)
		{
			ptr4[index] = ptr3[index];
			index++;
		}
	}
	else
	{
		index = n - 1;
		while ((int)index >= 0)
		{
			ptr4[index] = ptr3[index];
			index--;
		}
	}
	return (ptr4);
}
/*
int main()
{
	char str1[]="omar khaled";
	//char str2[]="ali samer";
	void *ptr1=str1;
	void *ptr2=str1+5;
	size_t size=4;
	printf("%p",ft_memmove(ptr2,ptr1,size));
	int index = 0;
        while (index < (int)size)
        {
                printf("%c-",str1[index]);
                index++;
        }
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:23:14 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 12:39:35 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_forward(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*ptr3;
	unsigned char	*ptr4;

	index = 0;
	ptr3 = (unsigned char *)(src);
	ptr4 = (unsigned char *)(dest);
	while (index < n)
	{
		ptr4[index] = ptr3[index];
		index++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr3;
	unsigned char	*ptr4;

	ptr3 = (unsigned char *)(src);
	ptr4 = (unsigned char *)(dest);
	if (n == 0)
		return (dest);
	if (ptr3 > ptr4)
	{
		copy_forward(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			n--;
			ptr4[n] = ptr3[n];
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
        printf("%p\n",ft_memmove(ptr2,ptr1,size));
        int index = 0;
        while (index < (int)size)
        {
                printf("%c-",str1[index]);
                index++;
        }
}
*/


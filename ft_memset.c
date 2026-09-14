/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:57:14 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:35:05 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr2;

	ptr2 = (unsigned char *)(s);
	index = 0;
	while (index < n)
	{
		ptr2[index] = c ;
		index++;
	}
	return (ptr2);
}
/*
int main()
{

	char st[]="omar 2004 jordan";
	void *ptr=st;
	int cons='a';
	size_t size =4;
	printf("%p",ft_memset(ptr,cons,size));	

	int index = 0;
        while (index < (int)size)
        {
                printf("%c-",st[index]);
                index++;
        }
}
*/

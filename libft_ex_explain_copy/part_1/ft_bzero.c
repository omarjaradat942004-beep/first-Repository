/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:13:20 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 11:01:20 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr2;
	size_t			index;

	index = 0;
	ptr2 = (unsigned char *)(s);
	while (index < n)
	{
		ptr2[index] = 0;
		index++;
	}
}
/*
int main()
{
	char st[]="omarkhaled";
	void *ptr=st;
	size_t size=4;
	ft_bzero(ptr,size);
	int index = 0;
        while (index < (int)size)
        {
                printf("%c-",st[index]);
                index++;
        }
}
*/

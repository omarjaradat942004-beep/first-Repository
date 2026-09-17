/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:45:20 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:32:00 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	character;
	unsigned char	*ptr;

	index = 0;
	character = (unsigned char)(c);
	ptr = (unsigned char *)(s);
	while (index < n)
	{
		if (ptr[index] == (character))
		{
			return (ptr + index);
		}
		index++;
	}
	return (NULL);
}
/*
int main()
{
	char str[]="omhgrfes";
	char c='s';
	size_t	size=4;
	printf("%p",ft_memchr(str,c,size));
	//printf("%c\n",ptr[index+1]);
}
*/

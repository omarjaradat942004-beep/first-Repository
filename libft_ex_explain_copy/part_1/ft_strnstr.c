/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 09:40:46 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 13:57:33 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	index2;

	index = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[index] && index < len)
	{
		index2 = 0;
		while (little[index2] && (index + index2 < len)
			&& (big[index + index2] == little[index2]))
			index2++;
		if (little[index2] == '\0')
			return ((char *)(big + index));
		index++;
	}
	return (NULL);
}
/*
int main()
{
        const char *largestring = "Foo Bar hazk";
        const char *smallstring = "Bar";
        char *ptr;
        ptr = ft_strnstr(largestring, smallstring, 12);
        printf("%s",ptr);
}
*/

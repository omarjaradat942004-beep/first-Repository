/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 09:40:46 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:42:42 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	little_len(const char *litt)
{
	size_t	lit_len;

	lit_len = 0;
	while (litt[lit_len])
	{
		lit_len++;
	}
	return (lit_len);
}

char	*result(char *ptr, size_t coun, size_t le)
{
	if (coun == le)
	{
		return ((char *)ptr);
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	index2;
	size_t	little_length;
	char	*pt;

	index = 0;
	index2 = 0;
	little_length = little_len(little);
	if (!little)
		return ((char *)big);
	while (big[index] && index < len)
	{
		if (big[index] == little[index2])
		{
			pt = (char *) big + (index - (little_length - 1));
			index2++;
		}
		index++;
	}
	if (*pt == little[0])
		return ((char *)pt);
	else
		return (NULL);
}
/*
int main()
{
        const char *largestring = "Foo Bar hazk";
        const char *smallstring = "hak";
        char *ptr;
        ptr = ft_strnstr(largestring, smallstring, 12);
        printf("%s",ptr);
}
*/

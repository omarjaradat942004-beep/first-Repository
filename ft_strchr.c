/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:24:27 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:41:20 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> 
char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
		{
			return ((char *)(s + index));
		}
		index++;
	}
	if (c == '\0')
	{
		return ((char *)(s + index));
	}
	return (NULL);
}
/*
int main()
{
	const char str[]="omar jarjadat";
	char c = 'p';
	printf("%p",ft_strchr(str, c));
	printf("%d\n",s[index]);
}
*/

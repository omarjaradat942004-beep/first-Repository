/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:24:27 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 12:46:35 by omajarad         ###   ########.fr       */
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
		if (s[index] == (unsigned char)c)
		{
			return ((char *)(s + index));
		}
		index++;
	}
	if ((unsigned char)c == '\0')
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

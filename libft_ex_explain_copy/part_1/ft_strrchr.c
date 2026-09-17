/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:46:37 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 14:11:39 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	size_t	c_counter;
	char	*c_index;

	index = 0;
	c_counter = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
		{
			c_index = (char *)(s + index);
			c_counter++;
		}
		index++;
	}
	if (c_counter >= 1)
	{
		return (c_index);
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
        const char str[]="omar jarjzdajt";
        char c = 'y';
        printf("%p",ft_strrchr(str, c));
	//c_index = s[index+1];
        
}
*/

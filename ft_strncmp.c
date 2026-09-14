/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:13:39 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:36:34 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while ((s1[index] && s2[index]) && index < n)
	{
		if (s1[index] > s2[index])
		{
			return (s1[index] - s2[index]);
		}
		else if (s1[index] < s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}
/*
int main()
{
	char str1[]="omar";
	char str2[]="omar";
	size_t size=5;
	printf("%d",ft_strncmp(str1,str2,size));
}
*/

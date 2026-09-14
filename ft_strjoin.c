/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarjaradat </var/spool/mail/omarjaradat>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:45:13 by omarjaradat       #+#    #+#             */
/*   Updated: 2026/09/14 14:46:10 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
size_t	str1_len(char const *str1)
{
	size_t	index;

	index = 0;
	while (str1[index])
		index++;
	return (index);
}

size_t	str2_len(char const *str2)
{
	size_t	index;

	index = 0;
	while (str2[index])
		index++;
	return (index);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	index;
	size_t	index2;

	index = str1_len(s1);
	index2 = str2_len(s2);
	ptr = malloc ((sizeof(char) * (index + index2)) + 1);
	if (!ptr)
		return (NULL);
	index2 = 0;
	while (s1[index2])
	{
		ptr[index2] = s1[index2];
		index2++;
	}
	index2 = 0;
	while (s2[index2])
	{
		ptr[index] = s2[index2];
		index++;
		index2++;
	}
	ptr[index] = '\0';
	return (ptr);
}
/*
int main()
{
	char const str1[]= "omar";
	char const str2[]= "jaradat";
	printf("%s",ft_strjoin(str1, str2));
}
*/

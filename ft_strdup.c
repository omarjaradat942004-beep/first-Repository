/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:21:40 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:35:38 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	index;

	index = 0;
	while (s[index])
		index++;
	ptr = malloc((index * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	index = 0;
	while (s[index])
	{
		ptr[index] = s[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
/*
int main()
{
	char str[]="omar jaradat";
	printf("%s",ft_strdup(str));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:24:27 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 12:48:11 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

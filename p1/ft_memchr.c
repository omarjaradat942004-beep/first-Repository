/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:45:20 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 11:25:08 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

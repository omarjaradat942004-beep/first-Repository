/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:36:51 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 11:39:18 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	index = 0;
	ptr1 = (unsigned char *)(s1);
	ptr2 = (unsigned char *)(s2);
	while (index < n)
	{
		if (ptr1[index] != ptr2[index])
		{
			return (ptr1[index] - ptr2[index]);
		}
		index++;
	}
	return (0);
}

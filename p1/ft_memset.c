/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:57:14 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 12:43:14 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr2;

	ptr2 = (unsigned char *)(s);
	index = 0;
	while (index < n)
	{
		ptr2[index] = c;
		index++;
	}
	return (ptr2);
}

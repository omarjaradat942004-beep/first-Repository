/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:27:15 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 11:42:04 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr3;
	unsigned char	*ptr4;
	size_t			index;

	index = 0;
	ptr3 = (unsigned char *)(src);
	ptr4 = (unsigned char *)(dest);
	while (index < n)
	{
		ptr4[index] = ptr3[index];
		index++;
	}
	return (ptr4);
}

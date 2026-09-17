/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:26:33 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 10:45:51 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t			index;
	unsigned char	*ptr;

	if (n == 0 || size == 0)
		return (NULL);
	if (size > (size_t)-1 / n)
		return (NULL);
	ptr = malloc((n * size));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < (size * n))
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}

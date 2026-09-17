/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:38:29 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 15:44:24 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	index = 0;
	while (s[index])
		index++;
	ptr = malloc(sizeof(char) * (index + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (s[index])
	{
		ptr[index] = f(index, s[index]);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

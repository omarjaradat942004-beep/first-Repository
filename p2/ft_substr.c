/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarjaradat </var/spool/mail/omarjaradat>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:25:12 by omarjaradat       #+#    #+#             */
/*   Updated: 2026/09/17 16:13:34 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	index;

	if (s == NULL)
		return (NULL);
	index = 0;
	ptr = malloc((sizeof(char) * len) + 1);
	if (!ptr)
		return (NULL);
	while ((index < len) && s[start])
	{
		ptr[index] = s[start];
		start++;
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

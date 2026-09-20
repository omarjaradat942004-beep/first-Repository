/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarjaradat </var/spool/mail/omarjaradat>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:25:12 by omarjaradat       #+#    #+#             */
/*   Updated: 2026/09/20 15:49:15 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*start_out_range(void)
{
	char	*ptr;

	ptr = malloc(sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

static size_t	len_out_range(char const *s, unsigned int start, size_t *len)
{
	size_t	index;
	size_t	index2;

	index = start;
	index2 = 0;
	while (s[index])
	{
		index2++;
		index++;
	}
	if (index2 < *len)
		*len = index2;
	return (*len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	index;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (start_out_range());
	index = 0;
	len = len_out_range(s, start, &len);
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

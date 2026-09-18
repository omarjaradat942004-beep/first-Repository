/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarjaradat </var/spool/mail/omarjaradat>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 16:16:33 by omarjaradat       #+#    #+#             */
/*   Updated: 2026/09/17 16:02:58 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_len(char const *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

size_t	str_non_set_start(char const *str, char const *se)
{
	size_t	index;
	size_t	index2;

	index = 0;
	index2 = 0;
	while (str[index])
	{
		while (se[index2])
		{
			if (str[index] == se[index2])
				break ;
			index2++;
		}
		if (!se[index2])
		{
			break ;
		}
		index2 = 0;
		index++;
	}
	return (index);
}

void	is_str_empty(char const *str, size_t *index, size_t *end)
{
	if (str_len(str) == 0)
	{
		*index = str_len(str);
		*end = *index;
	}
	else
		*index = str_len(str) - 1;
}

size_t	str_non_set_end(char const *str, char const *se)
{
	size_t	index;
	size_t	index2;
	size_t	end;

	is_str_empty(str, &index, &end);
	end = index + 1;
	index2 = 0;
	while (index > 0)
	{
		index--;
		while (se[index2])
		{
			if (str[index] == se[index2])
				break ;
			index2++;
		}
		if (!se[index2])
		{
			end = index + 1;
			break ;
		}
		index2 = 0;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;	
	size_t	counter;
	size_t	counter2;
	size_t	index;

	index = 0;
	counter = str_non_set_start(s1, set);
	counter2 = str_non_set_end(s1, set);
	ptr = malloc((sizeof(char) * (counter2 - counter)) + 1);
	if (!ptr)
		return (NULL);
	while (counter < counter2)
	{
		ptr[index] = s1[counter];
		index++;
		counter++;
	}
	ptr[index] = '\0';
	return (ptr);
}

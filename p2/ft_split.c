/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 22:34:14 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/14 14:45:34 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

int	is_delimiter(char const s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	words_number(char const *str, char c)
{
	size_t	index;
	size_t	words;

	index = 0;
	words = 0;
	while (str[index])
	{
		while (str[index] && is_delimiter(str[index], c))
			index++;
		if (str[index])
		{
			words++;
			while (str[index] && !is_delimiter(str[index], c))
				index++;
		}
	}
	return (words);
}

char	*copy_str(char const *str, char c)
{
	char	*word;
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	while (str[len] && !is_delimiter(str[len], c))
		len++;
	word = malloc((sizeof(char) * len) + 1);
	while (index < len)
	{
		word[index] = str[index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	index2;
	char	**st;

	st = malloc(sizeof(char *) * (words_number(s, c) + 1));
	if (!st)
		return (NULL);
	while (s[index])
	{
		while (s[index] && is_delimiter(s[index], c))
			index++;
		st[index2] = copy_str(&s[index], c);
		if (!st[index2])
			return (NULL);
		index2++;
		while (s[index] && !is_delimiter(s[index], c))
			index++;
	}
	st[index2] = '\0';
	return (st);
}
/*
int main()
{
	char const str[]="omar,Khaled,jaradat";
	char c=',';
	char **result;
	size_t	index = 0;
	result = ft_split(str, c);
	while (result[index])
	{
		printf("word[%ld] = [%s]\n",index,result[index]);
		free(result[index]);
		index++;
	}
	free(result);	
}
*/

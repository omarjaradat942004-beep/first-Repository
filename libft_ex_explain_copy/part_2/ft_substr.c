/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarjaradat </var/spool/mail/omarjaradat>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:25:12 by omarjaradat       #+#    #+#             */
/*   Updated: 2026/09/17 16:12:02 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
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
/*
int main()
{
	const char str[]="omar jaradat";
	unsigned int start = 5;
	size_t	len=6;
	printf("%s",ft_substr(str, start, len));


}
*/

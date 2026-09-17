/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 15:24:01 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/17 15:32:06 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*
static void	f(unsigned int n, char *c)
{
	*c += n;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
/*
int main()
{
	size_t	index = 0;
	char str[] = "abc";
	ft_striteri(str,f);
        while (str[index])
        {
                printf("%c-",str[index]);
                index++;
        }

}
*/

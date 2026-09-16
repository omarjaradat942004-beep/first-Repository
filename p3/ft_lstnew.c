/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 14:51:40 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/16 10:01:44 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc (sizeof(t_list));
	if (!ptr)
		return (NULL);
	(*ptr).content = content;
	(*ptr).next = NULL;
	return (ptr);
}
/*
int main()
{
	void	*ptr = "omar jaradat";
	printf("%s",(char *)(*ft_lstnew(ptr)).content);

}
*/

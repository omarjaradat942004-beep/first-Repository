/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 16:43:51 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/18 17:05:55 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	f(void *ptr)
{
	size_t	index;
	char	*str;

	str = (char *)(ptr);
	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int main(void)
{
        t_list  head;
        t_list  node2;
        t_list  node3;
	t_list	*head_ptr;

	head_ptr = &head;
        char str[]="omar";
	char str2[]="sami";
	char str3[]="abc";

        head.content = str;
        node2.content = str2;
        node3.content = str3;

        head.next = &node2;
        node2.next = &node3;
        node3.next = NULL;

        ft_lstiter(head_ptr, f);
	while (head_ptr != NULL)
	{
		printf("%s\n",(char *)head_ptr->content);
		head_ptr = head_ptr->next;
	}
}
*/

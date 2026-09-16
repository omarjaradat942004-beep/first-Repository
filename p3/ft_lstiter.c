/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:06:23 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/16 12:05:07 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(void *ptr)
{
	char	*pt;
	size_t	index;

	index = 0;
	pt = (char *)(ptr);
	while (pt[index])
	{
		pt[index]++;
		index++;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst->next != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}
/*
int main()
{
	t_list	head;
	t_list  node2;
	t_list  node3;

	size_t	index = 0;
	char str1[] = "first node";
	char str2[] = "second node";
	char str3[] = "last node";

	head.content = str1;
	head.next = &node2;

	node2.content = str2;
        node2.next = &node3;

	node3.content = str3;
        node3.next = NULL;
	ft_lstiter(&head, f);
	while (str1[index])
	{
		printf("%c",str1[index]);
		index++;
	}
	index = 0;
	printf("\n");
	while (str2[index])
        {
                printf("%c",str2[index]);
                index++;
        }
	index = 0;
	printf("\n");
	while (str3[index])
        {
                printf("%c",str3[index]);
                index++;
        }
}
*/

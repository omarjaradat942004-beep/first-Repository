/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:02:56 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/16 16:16:23 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	del(void *ptr)
{
	free(ptr);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || (*lst) == NULL || del == NULL)
		return ;
	while ((*lst) != NULL)
	{
		temp = (*lst)->next;
		del((*lst)-> content);
		free(*lst);
		(*lst) = temp;
	}
}
/*
int main()
{
        t_list  *head;
	t_list  *node2;

        head = malloc(sizeof(t_list));
        head -> content = malloc(10);

	node2 = malloc(sizeof(t_list));
        node2 -> content = malloc(10);

	head ->next = node2;
        node2 ->next = NULL;
        ft_lstclear(&head,del);
}
*/

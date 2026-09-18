/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 16:16:09 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/18 16:41:32 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	del(void *ptr)
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
		del((*lst)->content);
		free(*lst);
		(*lst) = temp;
	}
}
/*
int main(void)
{
        t_list  *head;
        t_list  *node2;
        t_list  *node3;

        head = malloc(sizeof(t_list));
        node2 = malloc(sizeof(t_list));
        node3 = malloc(sizeof(t_list));

        head->content = malloc(5);
        node2->content = malloc(7);
        node3->content = malloc(8);

        head->next = node2;
        node2->next = node3;
        node3->next = NULL;

        ft_lstclear(&head, del);

        if (head == NULL)
                printf("List cleared!\n");

        return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:13:29 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/18 15:32:42 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL || new == NULL)
		return ;
	temp = (*lst);
	if (temp == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		while (temp ->next != NULL)
			temp = temp ->next;
		temp -> next = new;
		new ->next = NULL;
	}
}
/*
int main()
{
        t_list head;
        t_list  new_node;
        t_list *head_ptr = &head;
        t_list *new_node_ptr = &new_node;

	head.content = "head node";
	new_node.content = "the last node";
        ft_lstadd_back(&head_ptr,new_node_ptr);
	while (head_ptr)
	{
		printf("%s\n",(char *)head_ptr->content);
		head_ptr = head_ptr->next;
	}
}
*/

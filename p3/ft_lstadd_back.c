/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:13:29 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/16 09:57:32 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = (*lst);
	if (temp == NULL || new == NULL)
		return ;
	while (temp ->next != NULL)
		temp = temp ->next;
	temp -> next = new;
}
/*
int main()
{
        t_list head;
        t_list  new_node;
        t_list *head_ptr = &head;
        t_list *new_node_ptr = &new_node;
        ft_lstadd_back(&head_ptr,new_node_ptr);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:56:05 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/15 19:50:03 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((*lst) == NULL || new == NULL)
		return ;
	new -> next = (*lst);
	(*lst) = new;
}
/*
int main()
{
	t_list head;
	t_list	new_node;
	t_list *head_ptr = &head;
	t_list *new_node_ptr = &new_node;
	ft_lstadd_front(&head_ptr,new_node_ptr);

}
*/

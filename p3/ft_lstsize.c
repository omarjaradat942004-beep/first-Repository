/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:57:32 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/16 10:00:59 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;

	if (lst == NULL)
		return ;
	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst -> next;
	}
	return (counter);
}
/*
int main()
{
	t_list head;
	t_list *head_ptr = &head;
	t_list node2;
	t_list node3;

	head.next = &node2;
	node2.next = &node3;
	node3.next = NULL;
	printf("%u",ft_lstsize(head_ptr));
}
*/

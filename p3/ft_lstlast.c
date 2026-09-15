/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:31:03 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/15 19:10:20 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst ->next != NULL)
		lst = lst ->next;
	return (lst);
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
	node2.content = "the second node";
        node3.next = NULL;
	node3.content = "the last node";
        printf("%s",(char *)ft_lstlast(head_ptr) -> content);
}
*/

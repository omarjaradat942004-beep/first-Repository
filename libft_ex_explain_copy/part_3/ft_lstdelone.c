/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:52:09 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/18 16:03:11 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *ptr)
{
	free(ptr);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst -> content);
	free(lst);
}
/*
int main(void)
{
        t_list  *head;

        head = malloc(sizeof(t_list));
        if (!head)
                return (1);

        head->content = malloc(10);
        if (!head->content)
        {
                free(head);
                return (1);
        }

        head->next = NULL;

        ft_lstdelone(head, del);
        return (0);
}
*/

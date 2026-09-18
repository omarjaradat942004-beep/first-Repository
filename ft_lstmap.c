/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:07:26 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/18 21:39:22 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	creat_node_fail(void *new_content, t_list **new_lst_head, void (*del)(void *))
{
	del(new_content);
	ft_lstclear(new_lst_head, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst_head;
	void	*new_content;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst_head = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_lst_head, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			creat_node_fail(new_content, &new_lst_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst_head, new_node);
		lst = lst->next;
	}
	return (new_lst_head);
}

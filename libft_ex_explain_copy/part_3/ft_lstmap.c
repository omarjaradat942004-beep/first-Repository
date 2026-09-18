/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:07:26 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/18 21:04:08 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	del(void *ptr)
{
	free(ptr);
}

void	*f(void *content)
{
	size_t	index;
	char	*copy;
	char	*str;

	copy = (char *)(content);
	index = 0;
	while (copy[index])
		index++;
	str = malloc(sizeof(char) * (index + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (copy[index])
	{
		str[index] = copy[index];
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	str[index] = '\0';
	return (str);
}

void	creat_node_fail(void *new_content, t_list **new_lst_head)
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
			creat_node_fail(new_content, &new_lst_head);
			return (NULL);
		}
		ft_lstadd_back(&new_lst_head, new_node);
		lst = lst->next;
	}
	return (new_lst_head);
}
/*
int main(void)
{
    t_list  *head;
    t_list  *node2;
    t_list  *node3;
    t_list  *new_lst;
    t_list  *tmp;

    char str[] = "omar";
    char str2[] = "sami";
    char str3[] = "abc";

    head = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    node3 = malloc(sizeof(t_list));

    head->content = str;
    node2->content = str2;
    node3->content = str3;

    head->next = node2;
    node2->next = node3;
    node3->next = NULL;

    new_lst = ft_lstmap(head, f, del);

    tmp = new_lst;
    while (tmp != NULL)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&new_lst, del);

    free(node3);
    free(node2);
    free(head);

    return (0);
}
*/

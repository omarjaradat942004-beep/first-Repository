/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omajarad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:06:06 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/16 15:52:05 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	*f(void *ptr)
{
	char	*str_origin;
	char    *str_new;
	size_t	index;

	str_origin = (char *)(ptr);
	index = 0;
	while (str_origin[index])
		index++;
	str_new = malloc(sizeof(char) * (index + 1));
	if (!str_new)
		return (NULL);
	index = 0;
	while (str_origin[index])
	{
		str_new[index] = str_origin[index];
		if (str_new[index] >= 97 && str_new[index] <= 122 )
			str_new[index] -= 32;
		index++;
	}
	str_new[index] = '\0';
	return (str_new);
}

void	del(void *ptr)
{
	free(ptr);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *first;
	t_list *temp;
	t_list *current;

	if (lst == NULL)
                return (NULL);
	first = malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	first->content = f(lst->content);
	if (first->content == NULL)
	{
		free(first);
		return (NULL);
	}
	first->next = NULL;
	temp = first;
	current = lst->next;
	while (current != NULL)
	{
		temp->next = malloc(sizeof(t_list));
		if (!temp->next)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		temp = temp->next;
		temp->content = f(current->content);
		if (!temp->content)
                {
                        ft_lstclear(&first, del);
                        return (NULL);
                }
		temp->next = NULL;
		current = current->next;
	}
	return (first);
}

int main()
{
        t_list  head;
        t_list  node2;
        t_list  node3;

        char str1[] = "first node";
        char str2[] = "second node";
        char str3[] = "last node";

        head.content = str1;
        head.next = &node2;

        node2.content = str2;
        node2.next = &node3;

        node3.content = str3;
        node3.next = NULL;
        printf("%s",(char *)ft_lstmap(&head, f, del) ->content);
	/*
	size_t  index = 0;
        while (str1[index])
        {
                printf("%c",str1[index]);
                index++;
        }
        index = 0;
        printf("\n");
        while (str2[index])
        {
                printf("%c",str2[index]);
                index++;
        }
        index = 0;
        printf("\n");
        while (str3[index])
        {
                printf("%c",str3[index]);
                index++;
        }
	*/
}


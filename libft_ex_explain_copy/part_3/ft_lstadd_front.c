/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omajarad <omar.jaradat1@learner.42.tech>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:56:05 by omajarad          #+#    #+#             */
/*   Updated: 2026/09/18 14:19:18 by omajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
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

/*
Exactly! 🎯

It's the same concept as modifying a normal variable inside a function.

For a normal variable:

void change(int *x)
{
    *x = 42;
}

int n = 10;
change(&n);

Why &n?

Because you want to modify n itself.

For a pointer:

void change(t_list **head)
{
    *head = new_node;
}

t_list *head = NULL;
change(&head);

Why &head?

Because you want to modify head itself—specifically, what node it points to.

So you can think of it as:

Want to modify n?       → give &n
Want to modify head?    → give &head

And because head is already a pointer:

n       → int
&n      → int *

head    → t_list *
&head   → t_list **

That's exactly why ft_lstadd_front takes:

t_list **lst

You're getting it. 👍
*/

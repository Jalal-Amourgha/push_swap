/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:29:24 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:36 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate(t_list **lst, char *s)
{
	t_list	*first;
	t_list	*last;

	if (!*lst || !(*lst)->next)
		return ;
	first = *lst;
	last = *lst;
	while (last->next)
		last = last->next;
	*lst = first->next;
	first->next = NULL;
	last->next = first;
	ft_putstr(s, 1, 0);
}

void	ft_reverse_rotate(t_list **stack, char *s)
{
	t_list	*prev;
	t_list	*curr;

	if (!*stack || !(*stack)->next)
		return ;
	prev = NULL;
	curr = *stack;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = NULL;
	curr->next = *stack;
	*stack = curr;
	ft_putstr(s, 1, 0);
}

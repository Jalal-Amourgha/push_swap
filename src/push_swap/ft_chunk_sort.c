/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:30:40 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:25 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_max_index(t_list *list_b)
{
	int	max;

	max = -1;
	while (list_b)
	{
		if (list_b->index > max)
			max = list_b->index;
		list_b = list_b->next;
	}
	return (max);
}

int	ft_position_of(t_list *list_b, int index)
{
	int	position;

	position = 0;
	while (list_b)
	{
		if (list_b->index == index)
			return (position);
		position++;
		list_b = list_b->next;
	}
	return (-1);
}

int	ft_get_stack_size(t_list *list_b)
{
	int	size;

	size = 0;
	while (list_b)
	{
		size++;
		list_b = list_b->next;
	}
	return (size);
}

void	ft_push_back_to_a(t_list **list_a, t_list **list_b)
{
	int	max_idx;
	int	position;
	int	size;

	while (*list_b)
	{
		max_idx = ft_max_index(*list_b);
		position = ft_position_of(*list_b, max_idx);
		size = ft_get_stack_size(*list_b);
		if (position <= size / 2)
		{
			while ((*list_b)-> index != max_idx)
				ft_rotate(list_b, "rb\n");
		}
		else
		{
			while ((*list_b)->index != max_idx)
				ft_reverse_rotate(list_b, "rrb\n");
		}
		ft_push(list_b, list_a, "pa\n");
	}
}

void	ft_chunk_sort(t_list **list_a, t_list **list_b, int size)
{
	int	range;
	int	idx;

	range = 15;
	if (size > 100)
		range = 35;
	idx = 0;
	while (*list_a)
	{
		if ((*list_a)->index <= idx)
		{
			ft_push(list_a, list_b, "pb\n");
			ft_rotate(list_b, "rb\n");
			idx++;
		}
		else if ((*list_a)->index <= idx + range)
		{
			ft_push(list_a, list_b, "pb\n");
			idx++;
		}
		else
			ft_rotate(list_a, "ra\n");
	}
	ft_push_back_to_a(list_a, list_b);
}

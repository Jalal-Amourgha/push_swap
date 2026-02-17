/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:25:00 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:36 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_2(t_list **list_a)
{
	if ((*list_a)->index > (*list_a)->next->index)
		ft_swap(list_a, "sa\n");
}

void	ft_sort_3(t_list **list_a)
{
	int	x;
	int	y;
	int	z;

	x = (*list_a)->index;
	y = (*list_a)->next->index;
	z = (*list_a)->next->next->index;
	if (x > y && y < z && x < z)
		ft_swap(list_a, "sa\n");
	else if (x > y && y > z)
	{
		ft_swap(list_a, "sa\n");
		ft_reverse_rotate(list_a, "rra\n");
	}
	else if (x > y && y < z && x > z)
		ft_rotate(list_a, "ra\n");
	else if (x < y && y > z && x < z)
	{
		ft_swap(list_a, "sa\n");
		ft_rotate(list_a, "ra\n");
	}
	else if (x < y && y > z && x > z)
		ft_reverse_rotate(list_a, "rra\n");
}

void	ft_sort_4(t_list **list_a, t_list **list_b)
{
	ft_push_min_to_b(list_a, list_b, 0);
	ft_sort_3(list_a);
	ft_push(list_b, list_a, "pa\n");
}

void	ft_sort_5(t_list **list_a, t_list **list_b)
{
	ft_push_min_to_b(list_a, list_b, 0);
	ft_push_min_to_b(list_a, list_b, 1);
	ft_sort_3(list_a);
	ft_push(list_a, list_a, "pa\n");
	ft_push(list_a, list_a, "pa\n");
	if ((*list_a)->index > (*list_a)->next->index)
		ft_swap(list_a, "sa\n");
}

void	ft_sort(t_list **list_a, t_list **list_b)
{
	int	size;

	size = ft_lstsize(*list_a);
	if (size == 1)
		return ;
	else if (size == 2)
		ft_sort_2(list_a);
	else if (size == 3)
		ft_sort_3(list_a);
	else if (size == 4)
		ft_sort_4(list_a, list_b);
	else if (size <= 5)
		ft_sort_5(list_a, list_b);
	else
		ft_chunk_sort(list_a, list_b, size);
}

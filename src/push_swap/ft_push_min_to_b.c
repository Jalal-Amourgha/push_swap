/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_min_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 13:10:53 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:30 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_min_to_b(t_list **a, t_list **b, int target)
{
	int	pos;
	int	size;

	size = ft_lstsize(*a);
	pos = ft_position_of(*a, target);
	if (pos <= size / 2)
		while (pos--)
			ft_rotate(a, "ra\n");
	else
		while (pos++ < size)
			ft_reverse_rotate(a, "rra\n");
	ft_push(a, b, "pb\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:55:36 by jamourgh          #+#    #+#             */
/*   Updated: 2026/02/17 19:42:09 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_check_if_sorted(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;
	int		n;

	if (*list_b != NULL)
		return (0);
	tmp = (*list_a);
	n = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (n >= tmp->value)
			return (0);
		n = tmp->value;
		tmp = tmp->next;
	}
	return (1);
}

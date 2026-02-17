/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_sorted_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:55:36 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:34:55 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

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

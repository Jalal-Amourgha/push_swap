/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_operator_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:09 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:34:51 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

void	ft_apply_swap(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
		return (ft_swap(list_a, ""));
	else if (c == 'b')
		return (ft_swap(list_b, ""));
	else if (c == 's')
	{
		ft_swap(list_a, "");
		return (ft_swap(list_b, ""));
	}
	return ;
}

void	ft_apply_push(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
		return (ft_push(list_b, list_a, ""));
	else if (c == 'b')
		return (ft_push(list_a, list_b, ""));
	return ;
}

void	ft_apply_rotate(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
		return (ft_rotate(list_a, ""));
	else if (c == 'b')
		return (ft_rotate(list_b, ""));
	else if (c == 'r')
	{
		ft_rotate(list_a, "");
		return (ft_rotate(list_b, ""));
	}
	return ;
}

void	ft_apply_rev_rotate(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
		return (ft_reverse_rotate(list_a, ""));
	else if (c == 'b')
		return (ft_reverse_rotate(list_b, ""));
	else if (c == 'r')
	{
		ft_reverse_rotate(list_a, "");
		return (ft_reverse_rotate(list_b, ""));
	}
	return ;
}

int	ft_apply_operator(t_list **list_a, t_list **list_b, char *operator)
{
	if (!ft_check_operator(operator))
		return (0);
	if (operator[0] == 's')
		ft_apply_swap(list_a, list_b, operator[1]);
	if (operator[0] == 'p')
		ft_apply_push(list_a, list_b, operator[1]);
	if (operator[0] == 'r' && ft_strlen(operator) == 3)
		ft_apply_rotate(list_a, list_b, operator[1]);
	if (operator[0] == 'r' && ft_strlen(operator) == 4)
		ft_apply_rev_rotate(list_a, list_b, operator[2]);
	return (1);
}

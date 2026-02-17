/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_operator_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:35:47 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:34:57 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

int	ft_check_operators(char **ops, char *op)
{
	int	i;
	int	j;

	i = 0;
	while (ops[i])
	{
		j = 0;
		while (ops[i][j] && ops[i][j] == op[j])
			j++;
		if (ops[i][j] == '\0')
			return (1);
		i++;
	}
	ft_putstr("Error\n", 2, 1);
	return (0);
}

int	ft_check_operator(char *op)
{
	char	*ops[12];

	ops[0] = "sa\n";
	ops[1] = "sb\n";
	ops[2] = "ss\n";
	ops[3] = "pa\n";
	ops[4] = "pb\n";
	ops[5] = "ra\n";
	ops[6] = "rb\n";
	ops[7] = "rr\n";
	ops[8] = "rra\n";
	ops[9] = "rrb\n";
	ops[10] = "rrr\n";
	ops[11] = NULL;
	return (ft_check_operators(ops, op));
}

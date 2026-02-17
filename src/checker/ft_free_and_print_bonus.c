/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_and_print_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:13:32 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:03 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

int	ft_free_and_print(t_list **list_a, t_list **list_b)
{
	if (!ft_check_if_sorted(list_a, list_b))
	{
		ft_free_list(*list_a);
		ft_free_list(*list_b);
		return (ft_putstr("KO\n", 1, 0));
	}
	ft_free_list(*list_a);
	ft_free_list(*list_b);
	return (ft_putstr("OK\n", 1, 0));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_operators_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:19:32 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:10 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

int	ft_get_operators(t_list **list_a, t_list **list_b)
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer)
	{
		if (!ft_apply_operator(list_a, list_b, buffer))
		{
			free(buffer);
			ft_free_list(*list_a);
			ft_free_list(*list_b);
			return (0);
		}
		free(buffer);
		buffer = get_next_line(0);
	}
	return (1);
}

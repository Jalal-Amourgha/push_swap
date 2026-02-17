/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:23:10 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:02 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

int	ft_create_list(t_list **list, char *argv[], int argc)
{
	t_list	*node;
	int		i;

	i = 0;
	while (argv[i])
	{
		node = ft_lstnew(ft_atoi(argv[i]));
		if (!node)
			return (1);
		ft_lstadd_back(list, node);
		if (argc == 2)
			free(argv[i]);
		i++;
	}
	if (argc == 2)
		free(argv);
	return (0);
}

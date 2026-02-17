/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 20:52:58 by jamourgh          #+#    #+#             */
/*   Updated: 2026/02/17 20:04:12 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc < 2 || (argc == 2 && ft_strlen(argv[1]) == 0))
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (argc > 2)
		argv = &argv[1];
	if (!ft_check_list(argv, argc))
		return (ft_putstr("Error\n", 2, 1));
	list_a = NULL;
	list_b = NULL;
	ft_create_list(&list_a, argv, argc);
	if (ft_check_if_sorted(&list_a, &list_b))
		return (0);
	ft_indexing_values(list_a);
	ft_sort(&list_a, &list_b);
	ft_free_list(list_a);
	return (0);
}

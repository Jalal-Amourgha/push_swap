/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:27:19 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:34:59 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

int	main(int argc, char *argv[])
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc < 2)
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
	if (!ft_get_operators(&list_a, &list_b))
		return (1);
	return (ft_free_and_print(&list_a, &list_b));
}

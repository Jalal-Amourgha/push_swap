/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplication_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:18:50 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:34:54 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

void	ft_fill_zeros(int arr[], int size)
{
	int	i;

	i = 0;
	while (i < size)
		arr[i++] = 0;
}

int	ft_check_arr(int arr[], int stop, int n)
{
	int	zeros;
	int	i;

	zeros = 0;
	i = 0;
	while (i < stop)
	{
		if ((n != 0 && arr[i] == n) || (n == 0 && zeros > 1))
			return (1);
		if (arr[i] == 0)
			zeros++;
		i++;
	}
	return (0);
}

int	ft_check_duplication(char *argv[])
{
	int	*arr;
	int	argv_size;
	int	i;
	int	n;

	argv_size = ft_argv_size(argv);
	arr = (int *)malloc(argv_size * sizeof(int));
	if (!arr)
		return (0);
	ft_fill_zeros(arr, argv_size);
	i = 0;
	while (argv[i])
	{
		n = ft_atoi(argv[i]);
		if (ft_check_arr(arr, i, n))
		{
			free(arr);
			return (0);
		}
		arr[i] = n;
		i++;
	}
	free(arr);
	return (1);
}

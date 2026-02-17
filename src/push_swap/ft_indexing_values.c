/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing_values.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:25:29 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:27 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	*ft_bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*ft_create_arr(t_list *list)
{
	int	*arr;
	int	size;
	int	idx;

	size = ft_lstsize(list);
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	idx = 0;
	while (list)
	{
		arr[idx] = list->value;
		idx++;
		list = list->next;
	}
	return (ft_bubble_sort(arr, size));
}

void	ft_indexing_values(t_list *list)
{
	int	*arr;
	int	size;
	int	idx;

	arr = ft_create_arr(list);
	size = ft_lstsize(list);
	while (list)
	{
		idx = 0;
		while (idx < size)
		{
			if (list->value == arr[idx])
			{
				list->index = idx;
				break ;
			}
			idx++;
		}
		list = list->next;
	}
	free(arr);
}

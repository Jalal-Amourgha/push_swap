/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:34:21 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:35 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push(t_list **lst1, t_list **lst2, char *s)
{
	t_list	*top;

	if (!*lst1)
		return ;
	top = *lst1;
	*lst1 = (*lst1)->next;
	top->next = *lst2;
	*lst2 = top;
	ft_putstr(s, 1, 0);
}

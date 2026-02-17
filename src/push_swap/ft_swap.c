/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:34:26 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:39 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap(t_list **lst, char *s)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (ft_lstsize(*lst) < 2)
		return ;
	tmp1 = *lst;
	tmp2 = (*lst)->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	*lst = tmp2;
	ft_putstr(s, 1, 0);
}

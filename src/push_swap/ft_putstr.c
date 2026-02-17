/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:36:05 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:34 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_putstr(char *s, int fd, int r)
{
	if (!s)
		return (1);
	write(fd, s, ft_strlen(s));
	return (r);
}

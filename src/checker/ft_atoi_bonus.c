/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:21:41 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:34:54 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

int	ft_atoi(char *snbr)
{
	long	n;
	int		sign;
	int		i;

	sign = 1;
	i = 0;
	n = 0;
	if (snbr[i] == '-' || snbr[i] == '+')
	{
		if (snbr[i] == '-')
			sign = -1;
		i++;
	}
	while (snbr[i])
	{
		n = (n * 10) + (snbr[i] - '0');
		i++;
	}
	return (n * sign);
}

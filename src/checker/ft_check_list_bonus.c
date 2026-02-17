/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:27:53 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:34:57 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checker_bonus.h"

char	*ft_dup(char *snbr)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(snbr);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (snbr[i])
	{
		dup[i] = snbr[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_check_range(char *snbr)
{
	char	*original;
	char	*copy;
	char	last_char;
	int		len;
	int		n;

	original = ft_dup(snbr);
	if (!original)
		return (0);
	len = ft_strlen(original);
	last_char = original[len - 1];
	copy = original;
	copy[len - 1] = '\0';
	if (copy[0] == '-' || copy[0] == '+')
		copy = &copy[1];
	n = ft_atoi(copy);
	if (n > 214748364
		|| (n == 214748364 && snbr[0] != '-' && last_char > '7')
		|| (n == 214748364 && snbr[0] == '-' && last_char > '8'))
		return (0);
	free(original);
	return (1);
}

int	ft_check_input(char *s)
{
	int	i;

	if (!s)
		return (0);
	if (((s[0] == '-' || s[0] == '+') && ft_strlen(s) > 11)
		|| ((s[0] != '-' || s[0] != '+') && ft_strlen(s) > 10))
		return (0);
	if (((s[0] == '-' || s[0] == '+') && ft_strlen(s) == 11)
		|| ((s[0] != '-' || s[0] != '+') && ft_strlen(s) == 10))
		return (ft_check_range(s));
	i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_list(char *argv[], int argc)
{
	int	error;
	int	i;

	error = 0;
	i = 0;
	while (argv[i])
	{
		if (!ft_check_input(argv[i]))
		{
			error = 1;
			break ;
		}
		i++;
	}
	if (error || !ft_check_duplication(argv))
	{
		if (argc == 2)
			ft_free_argv(argv);
		return (0);
	}
	return (1);
}

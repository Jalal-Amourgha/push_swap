/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:44:20 by jamourgh          #+#    #+#             */
/*   Updated: 2026/02/17 19:42:28 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

char	**ft_split(char const *s, char c);
int		ft_strlen(char *s);
int		ft_argv_size(char *argv[]);
int		ft_atoi(char *snbr);
int		ft_check_input(char *s);
int		ft_free_argv(char *argv[]);
int		ft_check_duplication(char *argv[]);
int		ft_check_list(char *argv[], int malloced);
void	ft_swap(t_list **lst, char *s);
void	ft_push(t_list **lst1, t_list **lst2, char *s);
void	ft_rotate(t_list **lst, char *s);
void	ft_reverse_rotate(t_list **lst, char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int value);
int		ft_create_list(t_list **list, char *argv[], int argc);
void	ft_free_list(t_list *list);
void	ft_indexing_values(t_list *list);
void	ft_chunk_sort(t_list **list_a, t_list **list_b, int size);
int		ft_putstr(char *s, int fd, int r);
void	ft_sort(t_list **list_a, t_list **list_b);
int		ft_position_of(t_list *list_b, int index);
void	ft_push_min_to_b(t_list **list_a, t_list **list_b, int target);
int		ft_free_argv(char *argv[]);
int		ft_check_if_sorted(t_list **list_a, t_list **list_b);

#endif
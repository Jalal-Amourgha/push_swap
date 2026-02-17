/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bonus.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamourgh <jamourgh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:27:22 by jamourgh          #+#    #+#             */
/*   Updated: 2025/12/21 13:35:00 by jamourgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKER_BONUS_H
# define FT_CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 13
# endif

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
int		ft_create_list(t_list **list, char *argv[], int argc);
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
void	ft_free_list(t_list *list);
int		ft_putstr(char *s, int fd, int r);
int		ft_get_operators(t_list **list_a, t_list **list_b);
int		ft_apply_operator(t_list **list_a, t_list **list_b, char *operator);
int		ft_check_operator(char *op);
int		ft_check_if_sorted(t_list **list_a, t_list **list_b);
int		ft_free_and_print(t_list **list_a, t_list **list_b);
int		ft_check_newline(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_edit_reminder(char *line, int n_idx);
int		ft_free_both(char *line, char *buffer);
char	*ft_free_line(char *line);
int		ft_find_line(int fd, char **line, char *buffer, char **reminder);
char	*get_next_line(int fd);

#endif
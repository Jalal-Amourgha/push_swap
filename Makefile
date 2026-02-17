NAME = push_swap

M_SRCS =  	ft_argv_size.c    ft_check_duplication.c    ft_chunk_sort.c    ft_free_argv.c    ft_indexing_values.c    ft_lstnew.c    ft_push.c    ft_push_swap.c    ft_rotate.c \
			ft_split.c    ft_swap.c    ft_atoi.c    ft_check_list.c    ft_create_list.c    ft_free_list.c    ft_lstadd_back.c    ft_lstsize.c    ft_push_min_to_b.c ft_check_if_sorted.c \
			ft_putstr.c    ft_sort.c    ft_strlen.c


B_SRCS =  	ft_apply_operator_bonus.c    ft_checker_bonus.c    ft_check_operator_bonus.c    ft_free_argv_bonus.c    ft_get_next_line_utils_bonus.c    ft_lstnew_bonus.c    ft_rotate_bonus.c \
			ft_swap_bonus.c    ft_atoi_bonus.c    ft_check_if_sorted_bonus.c    ft_create_list_bonus.c    ft_free_list_bonus.c    ft_get_operators_bonus.c    ft_push_bonus.c    \
			ft_split_bonus.c    ft_check_duplication_bonus.c    ft_check_list_bonus.c    ft_free_and_print_bonus.c    ft_get_next_line_bonus.c    ft_lstadd_back_bonus.c    \
			ft_putstr_bonus.c  ft_strlen_bonus.c    ft_lstsize_bonus.c    ft_argv_size_bonus.c 



M_BASENAMES = $(notdir $(M_SRCS))
B_BASENAMES = $(notdir $(B_SRCS))
M_OBJS = $(addprefix src/push_swap/, $(M_BASENAMES:.c=.o))
B_OBJS = $(addprefix src/checker/, $(B_BASENAMES:.c=.o))


CC = cc
CFLAGS = -Wall -Wextra -Werror


all: ${NAME}

${NAME}: ${M_OBJS}
	${CC} ${CFLAGS}  ${M_OBJS} -o ${NAME}

bonus: .bonus


.bonus:  ${B_OBJS}
	${CC} ${CFLAGS}  ${B_OBJS} -o checker
	@touch .bonus


clean:
	rm -f ${M_OBJS} ${B_OBJS}


fclean: clean
	rm -f ${NAME} checker


re: fclean all


.PHONY: all clean fclean re bonus
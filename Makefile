# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 17:36:21 by asyed             #+#    #+#              #
#    Updated: 2024/05/07 17:36:22 by asyed            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= push_swap

SRCS_PATH	= srcs/

SRCS		= push_swap.c\
				allerrorcheck.c all_listfunctions.c allocate_stack.c\
				set_rank_in_stone.c find_index_median.c\
				sort_algorithm.c sort_two_and_three.c start_sorting_a.c\
				utils_push.c utils_swap.c utils_rotate.c utils_reverse_rotate.c\
				find_target_and_cost.c find_target.c calculate_cost.c\
				execute_move.c move_rank_one_up.c

CC 			= cc

CFLAGS 		= -Wall -Wextra -Werror -g -I.

RM			= rm -f

OBJS 		= $(addprefix $(SRCS_PATH), $(SRCS:%.c=%.o))

$(NAME): $(OBJS)
	@$(MAKE) -C libft 
	@$(MAKE) -C ft_printf
	$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a ./ft_printf/ft_printf.a -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C libft clean
	@$(MAKE) -C ft_printf clean

fclean:	clean
	$(RM) $(NAME)
	@$(MAKE) -C libft fclean
	@$(MAKE) -C ft_printf fclean

re:	fclean all

.PHONY:	all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asyed <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 12:07:44 by asyed             #+#    #+#              #
#    Updated: 2024/05/03 13:03:57 by asyed            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRCS_PATH	= srcs/

SRCS		= push_swap.c\
				allerrorcheck.c all_listfunctions.c allocate_stack.c\
				set_rank_in_stone.c find_index_median.c\
				sort_algorithm.c sort_two_and_three.c start_sorting_a.c\
				utils_push.c utils_swap.c utils_rotate.c utils_reverse_rotate.c\
				find_target_and_cost.c find_target.c calculate_cost.c

CC 			= cc

CFLAGS 		= -Wall -Wextra -Werror -g -I.

RM			= rm -f

# @ surpress output, $() is to specify while Makefile to invoke Make and -C indicate where the Makefile is at 
$(NAME): # this is target declaration, those below are the dependencies needed to build the file
	@$(MAKE) -C libft 
	@$(MAKE) -C ft_printf
	$(CC) $(CFLAGS) $(addprefix $(SRCS_PATH), $(SRCS)) ./libft/libft.a ./ft_printf/ft_printf.a -o $(NAME)

all:	$(NAME)

clean:
	$(RM)
	@$(MAKE) -C libft clean
	@$(MAKE) -C ft_printf clean

fclean:	clean
	$(RM) $(NAME)
	@$(MAKE) -C libft fclean
	@$(MAKE) -C ft_printf fclean

re:	fclean all

.PHONY:	all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asyed <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 12:07:44 by asyed             #+#    #+#              #
#    Updated: 2024/04/26 15:09:10 by asyed            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRCS		= push_swap.c errorcheck.c # all .c over here

CC 			= cc

CFLAGS 		= -Wall -Wextra -Werror -g -I.

RM			= rm -f

# @ surpress output, $() is to specify while Makefile to invoke Make and -C indicate where the Makefile is at 
$(NAME): # this is target declaration, those below are the dependencies needed to build the file
	@$(MAKE) -C libft 
	@$(MAKE) -C ft_printf
	$(CC) $(CFLAGS) $(SRCS) ./libft/libft.a ./ft_printf/ft_printf.a -o $(NAME)

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

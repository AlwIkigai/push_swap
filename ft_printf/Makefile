#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 12:02:02 by asyed             #+#    #+#              #
#    Updated: 2024/04/25 19:05:48 by asyed            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC 		= cc

CFLAGS 		= -Wall -Wextra -Werror -I.

SRCS 		= ft_putchar_pf.c ft_putstr_pf.c ft_strlen_pf.c ft_putnbr_pf.c\
				ft_putunbr_pf.c ft_puthex_pf.c ft_voidptr_pf.c ft_printf.c
					
OBJS 		= $(SRCS:%.c=%.o)

NAME 		= ft_printf.a

all:		$(NAME)

$(OBJS): %.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

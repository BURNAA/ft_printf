# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 23:43:31 by hlabouit          #+#    #+#              #
#    Updated: 2022/12/12 23:47:45 by hlabouit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libftprintf.a
SRCS =	ft_printf print_char print_nbr print_nbr_hx print_str print_u_nbr print_0x

OBJS = $(SRCS:=.o)
CC =  cc
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

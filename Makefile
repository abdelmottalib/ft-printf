# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqiouami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 13:36:16 by aqiouami          #+#    #+#              #
#    Updated: 2022/10/28 14:33:44 by aqiouami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = 		ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_hex.c \
			ft_p_pointer.c \
			ft_unsigned_print.c \
			utils.c 
			
OBJECT = $(SRC:.c=.o)
FLAGS  = -Wall -Wextra -Werror

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJECT)
	ar rcs $@ $^

%.o: %.c ft_printf.h
	gcc $(FLAGS) -c $<

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

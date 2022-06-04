# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 23:26:53 by oqatim            #+#    #+#              #
#    Updated: 2021/12/27 16:10:59 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a  

FILES = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_point.c \
		ft_hexa_lower.c \
		ft_hexa_upper.c \
		ft_unsi.c \

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

HDR = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJ) $(HDR)
	ar rcs $(NAME) $(OBJ) 

%.o : %.c
	gcc $(FLAGS) -c $<
	
clean :  
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

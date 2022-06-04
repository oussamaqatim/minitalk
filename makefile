# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 10:51:17 by oqatim            #+#    #+#              #
#    Updated: 2022/03/05 17:56:04 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = minitalk_utilis.c \


PRINTF = ft_printf/libftprintf.a


OBJ = $(FILES:.c=.o)

all : libPrint client server client_bns server_bns 

FLAGS = -Wall -Wextra -Werror

libPrint: $(OBJ)
	make -C ft_printf 

client : 
	${CC} ${FLAGS} -c ft_client.c 
	${CC} ${FLAGS} ft_client.o $(OBJ) -o client ${PRINTF}

server : 
	${CC} ${FLAGS} -c ft_server.c 
	${CC} ${FLAGS} ft_server.o $(OBJ) -o server ${PRINTF}

client_bns : 
	${CC} ${FLAGS} -c ft_client_bns.c
	${CC} ${FLAGS} ft_client_bns.o $(OBJ) -o client_bns ${PRINTF}
	
server_bns : 
	${CC} ${FLAGS} -c ft_server_bns.c
	${CC} ${FLAGS} ft_server_bns.o $(OBJ) -o server_bns ${PRINTF}

%.o : %.c	
	$(CC) $(FLAGS) -c $<

clean :
	rm -f $(OBJ) ft_client.o ft_server.o ft_client_bns.o ft_server_bns.o

fclean : clean
	make fclean -C ft_printf
	rm -f server client server_bns client_bns	

re : fclean all
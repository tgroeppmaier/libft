# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgroeppm <tgroeppm@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 13:41:52 by tgroeppm          #+#    #+#              #
#    Updated: 2023/02/08 14:51:30 by tgroeppm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-c -Wall -Wextra -Werror
NAME=libft.a
SRC=*.c
OBJ=*.o

.PHONY: all clean fclean re

all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)
	ar rc $@ *.o
	
clean:
	rm -f *.o
	
fclean:
	rm -f $(NAME) 

re: fclean all
	
%.c:
	make all
	
bonus: $(SRC)
	
so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)


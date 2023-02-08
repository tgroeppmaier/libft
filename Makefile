# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgroeppm <tgroeppm@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 13:41:52 by tgroeppm          #+#    #+#              #
#    Updated: 2023/02/08 18:01:43 by tgroeppm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-c -Wall -Wextra -Werror
NAME=libft.a
SRC=*.c
OBJ=*.o
BONUS=lstnew.c lstadd_front.c lstsize.c lstlast.c lstadd_back.c lstdelone.c lstclear.c lstiter.c

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
	
bonus: 
	$(CC) $(CFLAGS) $(SRC)
	ar rc NAME lstnew.o lstadd_front.o
so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)


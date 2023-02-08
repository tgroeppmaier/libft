# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgroeppm <tgroeppm@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 13:41:52 by tgroeppm          #+#    #+#              #
#    Updated: 2023/02/08 19:02:34 by tgroeppm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-c -Wall -Wextra -Werror
NAME=libft.a
SRC=*.c
OBJ=*.o
# BONUS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

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
	$(CC) $(CFLAGS) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
	ar rc $(NAME) ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o
so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)


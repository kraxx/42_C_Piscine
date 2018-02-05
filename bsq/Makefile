# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlopes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/26 15:38:11 by jlopes            #+#    #+#              #
#    Updated: 2017/04/26 15:38:40 by jlopes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = 	src/ft_atoi.c \
		src/ft_io.c \
		src/ft_string.c \
		src/handle_input.c \
		src/main.c \
		src/solver.c \
		src/update.c

OBJ = 	ft_atoi.o \
		ft_io.o \
		ft_string.o \
		handle_input.o \
		main.o \
		solver.o \
		update.o

HEADERS = includes/

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	gcc -O3 $(FLAGS) -c -I$(HEADERS) $(SRC)
	gcc -O3 $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

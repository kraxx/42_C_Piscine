# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchow <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/17 18:05:10 by jchow             #+#    #+#              #
#    Updated: 2017/04/17 18:05:13 by jchow            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/print.c srcs/main.c srcs/error.c srcs/op.c srcs/ft_atoi.c
OBJ = print.o main.o error.o op.o ft_atoi.o
HEADERS = includes/
FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I$(HEADERS)
	gcc $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

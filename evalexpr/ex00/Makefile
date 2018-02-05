# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchow <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/21 23:34:11 by jchow             #+#    #+#              #
#    Updated: 2017/04/21 23:34:12 by jchow            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = srcs/main.c srcs/print.c
OBJ = main.o print.o
HEADERS = includes/
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I$(HEADERS)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

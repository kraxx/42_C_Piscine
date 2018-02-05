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

NAME = rush-2
SRC = srcs/main.c srcs/print.c srcs/util.c srcs/rush00.c srcs/rush01.c srcs/rush02.c srcs/rush03.c srcs/rush04.c
OBJ = main.o print.o util.o rush00.o rush01.o rush02.o rush03.o rush04.o
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

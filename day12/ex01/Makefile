# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchow <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 02:32:09 by jchow             #+#    #+#              #
#    Updated: 2017/04/20 02:32:10 by jchow            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = srcs/main.c srcs/print.c
OBJ = main.o print.o
HEADERS = includes/
FLAGS = -c -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I$(HEADERS)
	gcc $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

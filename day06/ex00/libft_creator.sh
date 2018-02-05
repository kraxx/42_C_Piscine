gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
ranlib libft.a
find . -name "*.o" -delete

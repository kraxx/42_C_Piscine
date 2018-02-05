#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>

void	first_check(int **tab);
int     place_numbers(char **board, char **argv)
int		print_error(void);
int     check_dupes(char num, int y, int x, char **board)
#endif

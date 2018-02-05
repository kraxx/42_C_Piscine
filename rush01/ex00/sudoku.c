/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 03:56:52 by jchow             #+#    #+#             */
/*   Updated: 2017/04/15 05:03:53 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int 	print_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	place_numbers(char **board, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		board[i] = (char*)malloc(sizeof(**board) * 9);
		j = 0;
		while (j < 9)
		{
			if (argv[i+1][j] >= '1' || argv[i+1][j] <= '9')
				board[i][j] = argv[i+1][j];
			else if (argv[i+1][j] == '.')
				board[i][j] = '.';
			else
				return (print_error());
			j++;
		}
		i++;
	}
	return (1);
}

int check_dupes(char num, int y, int x, char **board)
{
	int i;
	int z;
	int w;

	i = 0;
	z = (y / 3) * 3;
	w = (x / 3) * 3;
	while (i < 9)
	{
		if ((board[y][i] == num && i != x) || (board[i][x] == num && i != y))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (board[z + (i % 3)][w + (i / 3)] == num)
			return (0);
	}
	return (1);
}

void	first_check(char **board)
{
	int y;
	int x;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (board[y][x] >= '1' && board[y][x] <= '9')
				check_dupes(board[y][x], y, x, board);
			x++;
		}
		y++;
	}
}

int		resolve(char **board, int y, int x, int is_reverse)
{
	if (!(y < 9 && x < 9))
		return (1);
	if (board[y][x] != 0)
	{
		if ((x + 1) < 9)
			return (resolve(board, y, x + 1, is_reverse));
		else if ((y + 1) < 9)
			return (resolve(board, y + 1, 0, is_reverse));
		else
			return (1);
	}
	else
	{
		if (is_reverse)
			return (try_move_rev(board, y, x, is_reverse));
		else
			return (try_move(board, y, x, is_reverse));
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char **board;
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 10)
		return (print_error());
	board = (char**)malloc(sizeof(**board) * 9 * 9);
	place_numbers(board, argv);
	first_check(board);
	resolve(board, y, x, 0);

	return (0);
}

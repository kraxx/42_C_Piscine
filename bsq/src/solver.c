/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 15:24:22 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/26 15:25:45 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	make_frame(int **tab, int target, int lenght, int height)
{
	int a;
	int b;

	a = target;
	b = target;
	while (a < lenght - target)
	{
		tab[b][a] = target + 1;
		a++;
	}
	a--;
	while (b < height - target)
	{
		tab[b][a] = target + 1;
		b++;
	}
	b--;
	while (--a >= target)
		tab[b][a] = target + 1;
	a++;
	while (--b >= target)
		tab[b][a] = target + 1;
}

void	poster(int **tab, char *block)
{
	int x;
	int y;

	y = 0;
	while (y < g_dimension[0])
	{
		x = 0;
		while (x < g_dimension[1])
		{
			if (tab[y][x] == 0)
				write(1, block + 2, 1);
			else if (tab[y][x] == -1)
				write(1, block + 1, 1);
			else
				write(1, block, 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

void	print_result(int **tab, int *max, char *block)
{
	int x;
	int y;

	max[2]--;
	y = max[1] - max[2];
	while (y <= max[1] + max[2] + max[3])
	{
		x = max[0] - max[2];
		while (x <= max[0] + max[2] + max[3])
		{
			tab[y][x] = -1;
			x++;
		}
		y++;
	}
	poster(tab, block);
}

void	percolation(int **tab, int x, int y)
{
	tab[y][x] = 0;
	if (x != 0)
	{
		tab[y][x] = 1;
		recursifg(tab, x, y, 0);
	}
	if (x != g_dimension[1] - 1)
	{
		tab[y][x] = 1;
		recursifd(tab, x, y, 0);
	}
	if (y != 0)
	{
		tab[y][x] = 1;
		recursifh(tab, x, y, 0);
	}
	if (y != g_dimension[0] - 1)
	{
		tab[y][x] = 1;
		recursifb(tab, x, y, 0);
	}
}

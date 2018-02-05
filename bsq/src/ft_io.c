/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 05:25:11 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/26 05:26:04 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	recursifg(int **tab, int x, int y, int value)
{
	if (tab[y][x] > value)
	{
		tab[y][x] = value;
		if (x != 0 && y != g_dimension[0] - 1)
			recursifg(tab, x - 1, y + 1, value + 1);
		if (x != 0)
			recursifg(tab, x - 1, y, value + 1);
		if (x != 0 && y != 0)
			recursifg(tab, x - 1, y - 1, value + 1);
	}
}

void	recursifd(int **tab, int x, int y, int value)
{
	if (tab[y][x] > value)
	{
		tab[y][x] = value;
		if (x != g_dimension[1] - 1 && y != g_dimension[0] - 1)
			recursifd(tab, x + 1, y + 1, value + 1);
		if (x != g_dimension[1] - 1)
			recursifd(tab, x + 1, y, value + 1);
		if (x != g_dimension[1] - 1 && y != 0)
			recursifd(tab, x + 1, y - 1, value + 1);
	}
}

void	recursifh(int **tab, int x, int y, int value)
{
	if (tab[y][x] > value)
	{
		tab[y][x] = value;
		if (x != g_dimension[1] - 1 && y != 0)
			recursifh(tab, x + 1, y - 1, value + 1);
		if (y != 0)
			recursifh(tab, x, y - 1, value + 1);
		if (x != 0 && y != 0)
			recursifh(tab, x - 1, y - 1, value + 1);
	}
}

void	recursifb(int **tab, int x, int y, int value)
{
	if (tab[y][x] > value)
	{
		tab[y][x] = value;
		if (x != g_dimension[1] - 1 && y != g_dimension[0] - 1)
			recursifb(tab, x + 1, y + 1, value + 1);
		if (y != g_dimension[0] - 1)
			recursifb(tab, x, y + 1, value + 1);
		if (x != 0 && y != g_dimension[0] - 1)
			recursifb(tab, x - 1, y + 1, value + 1);
	}
}

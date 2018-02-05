/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aucastil <austillo@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 17:57:41 by aucastil          #+#    #+#             */
/*   Updated: 2017/04/23 22:50:54 by aucastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_write(char *out, int *index, char c)
{
	out[*index] = c;
	*index++;
}

void	ft_write_logic(int *x_y_xit_yit, char *out, int *index)
{
	if (x_y_xit_yit[2] == 1 || x_y_xit_yit[2] == x)
	{
		if (x_y_xit_yit[3] == 1)
			ft_write(out, *index, 'A');
		else if (x_y_xit_yit[3] == y)
			ft_write(out, *index, 'C');
		else
			ft_write(out, *index, 'B');
	}
	else if (x_y_xit_yit[3] == 1 || x_y_xit_yit[3] == y)
		ft_write(out, *index, 'B');
	else
		ft_write(out, *index, ' ');
}

void	rush_two(int x, int y)
{
	int x_y_xit_yit[] = {x, y, 1, 1 };
	char *out;

	out = (char*)malloc(sizeof(char) * (y * (x + 1)));
	if (x > 0 && y > 0)
	{
		while (x_y_xit_yit[3] <= y)
		{
			while (x_y_xit_yit[2] <= x)
			{
				ft_write_logic(x_y_xit_yit_i, out, &index);
				x_y_xit_yit[2]++;
			}
			x_y_xit_yit[2] = 1;
			x_y_xit_yit[3]++;
			ft_write(out, &index, '\n');
		}
	}
}

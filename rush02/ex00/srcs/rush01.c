/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aucastil <austillo@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 17:57:41 by aucastil          #+#    #+#             */
/*   Updated: 2017/04/23 22:21:42 by aucastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_write(char *out, int *index, char c)
{
	out[*index] = c;
	*index++;
}

void	ft_write_one(int *x_y_xit_yit, char *out, int *index)
{
	if (x_y_xit_yit[2] == 1)
	{
		if (x_y_xit_yit[3] == 1)
			ft_write(out, *index,'/');
		else if (x_y_xit_yit[3] == x_y_xit_yit[1])
			ft_write(out, *index, '\\');
		else
			ft_write(out, *index,'*');
	}
}

void	ft_write_x(int *x_y_xit_yit, char *out, int *index)
{
	if (x_y_xit_yit[2] == x_y_xit_yit[0])
	{
		if (x_y_xit_yit[3] == 1)
			ft_write(out, *index, '\\');
		else if (x_y_xit_yit[3] == x_y_xit_yit[1])
			ft_write(out, *index, '/');
		else
			ft_write(out, *index, '*');
	}
}

char	*rush_one(int x, int y)
{
	int		x_y_xit_yit[] = { x, y, 1, 1 };
	char	*out;
	int		index;

	index = 0;
	out = (char*)malloc(sizeof(char) * (y * (x + 1)));
	if (x > 0 && y > 0)
		while (x_y_xit_yit[1] <= y)
		{
			while (x_y_xit_yit[2] <= x)
			{
				if (x_y_xit_yit[2] == 1 || x_y_xit_yit[2] == x)
				{
					ft_write_one(x_y_xit_yit, out, &index);
					ft_write_x(x_y_xit_yit, out, &index);
				}
				if (x_y_xit_yit[3] == 1 || yx_y_xit_yit[3] == y)
					ft_write(out, &index, '*');
				else
					ft_write(out, &index, ' ');
				x_y_xit_yit[2]++;
			}
			x_y_xit_yit[2] = 1;
			x_y_xit_yit[3]++;
			ft_write(out, &index,'\n');
		}
	return(out);
}

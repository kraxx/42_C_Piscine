/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 11:58:25 by jchow             #+#    #+#             */
/*   Updated: 2017/04/09 23:19:33 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_door(int blanks, int stars, int door, int knob)
{
	int sd[2];

	sd[1] = 0;
	if (knob)
	{
		while (sd[1] < door - 2)
		{
			ft_putchar('|');
			sd[1]++;
		}
		ft_putchar('$');
		ft_putchar('|');
	}
	else
		while (sd[1] < door)
		{
			ft_putchar('|');
			sd[1]++;
		}
	sd[0] = 0;
	while (sd[0] < stars)
	{
		ft_putchar('*');
		sd[0]++;
	}
}

void	write_line(int blanks, int stars, int door, int knob)
{
	int b;
	int s;

	b = 0;
	s = 0;
	while (b < blanks)
	{
		ft_putchar(' ');
		b++;
	}
	ft_putchar('/');
	while (s < stars)
	{
		ft_putchar('*');
		s++;
	}
	if (door)
		write_door(blanks, stars, door, knob);
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua_2(int size, int *arr)
{
	while (arr[3] <= size)
	{
		arr[7] = arr[3] + 2;
		arr[8] = 0;
		while (arr[8] < arr[7])
		{
			arr[9] = (arr[0] / 2) - arr[4];
			arr[10] = (2 * ((arr[0] / 2) - arr[9])) - 1;
			if (arr[3] == size && !(arr[8] < arr[7] - arr[6]))
			{
				arr[10] = ((arr[0] / 2) - arr[9]) - (arr[6] / 2) - 1;
				if (size > 4 && arr[8] == arr[7] - arr[6] + (arr[6] / 2))
					write_line(arr[9], arr[10], arr[6], 1);
				else
					write_line(arr[9], arr[10], arr[6], 0);
			}
			else
				write_line(arr[9], arr[10], 0, 0);
			arr[8]++;
			arr[4]++;
		}
		arr[5] += (arr[3] % 2) ? 1 : 0;
		arr[4] += arr[5];
		arr[3]++;
	}
}

void	sastantua(int size)
{
	int arr[11];

	if (size <= 0)
		return ;
	arr[0] = 7;
	arr[1] = 12;
	arr[2] = 2;
	while (arr[2] <= size)
	{
		if (arr[2] > 2)
			arr[1] += (arr[2] % 2) ? 2 : 4;
		arr[0] += arr[1];
		arr[2]++;
	}
	arr[6] = 1;
	if (size > 1)
		arr[6] = (size % 2) ? size : size - 1;
	arr[3] = 1;
	arr[4] = 1;
	arr[5] = 1;
	sastantua_2(size, arr);
}

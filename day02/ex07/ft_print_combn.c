/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 12:28:37 by jchow             #+#    #+#             */
/*   Updated: 2017/04/06 22:55:32 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_arr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft_incrementer(int *arr, int n)
{
	int	i;
	int j;

	j = n - 1;
	while (1)
	{
		while (arr[j] == (9 + j - (n - 1)) && j >= 0)
			j--;
		if (j < 0)
			break ;
		arr[j]++;
		i = j + 1;
		while (i < n)
		{
			arr[i] = arr[j] + 1;
			i++;
		}
		j = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		ft_print_arr(arr, n);
	}
}

void	ft_print_combn(int n)
{
	int	arr[n];
	int	i;

	i = 0;
	if (n > 9)
		return ;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	ft_print_arr(arr, n);
	ft_incrementer(arr, n);
}

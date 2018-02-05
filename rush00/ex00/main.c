/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 23:26:27 by jchow             #+#    #+#             */
/*   Updated: 2017/04/09 11:27:10 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int		if_negativ;
	int		count;
	int		num;

	if_negativ = 0;
	count = 0;
	num = 0;
	while (str[0] == ' ')
		str++;
	if (str[0] == '-')
		if_negativ = 1;
	if (str[0] == '+' || str[0] == '-')
		str++;
	while ((str[count] >= '0' && str[count] <= '9'))
	{
		num += str[count] - 48;
		if (str[count + 1] >= '0' && str[count + 1] <= '9')
			num *= 10;
		count++;
	}
	if (if_negativ == 1)
		return (-num);
	return (num);
}


int		main(int ac, char **av)
{
	if (ac == 3)
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}

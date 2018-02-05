/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 22:37:50 by jchow             #+#    #+#             */
/*   Updated: 2017/04/18 01:48:04 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int						i;
	char					*op;
	t_op_functions const	op_arr[] = {ft_add, ft_sub, ft_mul, ft_div, ft_mod};

	op = "+-*/%\0";
	if (argc != 4)
		return (0);
	if (argv[2][0] == '/' && !ft_atoi(argv[3]))
		return (div_error());
	if (argv[2][0] == '%' && !ft_atoi(argv[3]))
		return (mod_error());
	i = 0;
	while (op[i])
	{
		if (op[i] == argv[2][0])
		{
			ft_putnbr(op_arr[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
}

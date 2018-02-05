/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 23:34:20 by jchow             #+#    #+#             */
/*   Updated: 2017/04/22 23:32:42 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>
#include <stdlib.h>

int		eval_sub(char **str)
{
	int nb1;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nb1 = eval_summand(str);
		if (**str == ')')
			(*str)++;
		return (nb1);
	}
	return (ft_atoi(str));
}

int		eval_factor(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = eval_sub(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '/' && op != '*' && op != '%')
			return (nb1);
		(*str)++;
		nb2 = eval_sub(str);
		if (op == '/')
			nb1 /= nb2;
		else if (op == '*')
			nb1 *= nb2;
		else
			nb1 %= nb2;
	}
	return (nb1);
}

int		eval_summand(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = eval_factor(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (nb1);
		(*str)++;
		nb2 = eval_factor(str);
		if (op == '+')
			nb1 += nb2;
		else
			nb1 -= nb2;
	}
	return (nb1);
}

int		eval_expr(char *str)
{
	return (eval_summand(&str));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

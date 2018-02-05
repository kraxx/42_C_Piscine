/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:52:30 by jchow             #+#    #+#             */
/*   Updated: 2017/04/17 18:52:32 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

typedef int	(*t_op_functions)(int, int);

int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_mul(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		div_error(void);
int		mod_error(void);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 18:37:41 by jchow             #+#    #+#             */
/*   Updated: 2017/04/22 18:37:41 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char **str);
int		eval_summand(char **expr);
int		eval_expr(char *expr);
int		eval_factor(char **expr);
int		eval_subexpr(char **expr);

#endif

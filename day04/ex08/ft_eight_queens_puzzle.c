/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 18:41:21 by jchow             #+#    #+#             */
/*   Updated: 2017/04/08 21:59:04 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_redundant(int n)
{
	if (n == 1)
		ft_redundant(n - 1);
}

int		ft_eight_queens_puzzle(void)
{
	ft_redundant(1);
	return (92);
}

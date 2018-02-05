/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 17:07:57 by jchow             #+#    #+#             */
/*   Updated: 2017/04/08 18:45:51 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 3;
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
		if (nb == 46341)
			return (1);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb > 2147483629)
		return (0);
	if (!(nb % 2))
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}

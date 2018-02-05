/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 11:55:19 by jchow             #+#    #+#             */
/*   Updated: 2017/04/10 11:55:21 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	blank_check(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ans;
	int sign;

	i = 0;
	ans = 0;
	sign = 1;
	while (blank_check(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			sign = (str[i] == '+') ? 1 : -1;
			i++;
		}
		else
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = (ans * 10) + str[i] - 48;
		i++;
	}
	return (ans * sign);
}

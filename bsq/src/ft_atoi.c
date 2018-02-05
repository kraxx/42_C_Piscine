/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 05:27:55 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/26 15:28:55 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_astrcpy(char *src)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char *) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}

int		loop(char **t, char *c, int *is_sign, int *i)
{
	*i = 0;
	*is_sign = 0;
	*c = *t[*i];
	while ((*c < '0' || *c > '9') && *is_sign == 0)
	{
		if (*c != 9 && *c != 10 && *c != 11 && *c != 12 && *c != 13 && *c != 32
				&& *c != '-' && *c != '+')
			return (0);
		if (*c == '-' || *c == '+')
			*is_sign = 1;
		*i = *i + 1;
		*c = t[0][*i];
	}
	return (1);
}

char	*ft_isolate_number(char *t)
{
	int		i;
	char	c;
	int		j;
	int		is_sign;

	is_sign = 0;
	if (loop(&t, &c, &is_sign, &i) == 0)
		return (0);
	if (is_sign == 1 && (t[i] < '0' || t[i] > '9'))
		return (0);
	if (is_sign == 1)
		i--;
	j = 0;
	while ((t[i + j] >= '0'
				&& t[i + j] <= '9') || (t[i + j] == '-' || t[i + j] == '+'))
		j++;
	t[i + j] = '\0';
	return (t + i);
}

int		ft_atoi(char *s)
{
	int		mult;
	int		i;
	int		hund;
	int		res;
	char	*s2;

	s2 = ft_astrcpy(s);
	hund = 1;
	res = 0;
	mult = 1;
	s2 = ft_isolate_number(s2);
	if (s == 0)
		return (0);
	i = ft_strlen(s2) - 1;
	if (s[0] == '-')
		mult = -1;
	while (i >= 0 && s2[i] != '-' && s2[i] != '+')
	{
		res += (s2[i] - '0') * hund;
		i--;
		hund *= 10;
	}
	free(s2);
	return (res * mult);
}

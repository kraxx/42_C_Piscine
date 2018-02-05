/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 16:09:58 by jchow             #+#    #+#             */
/*   Updated: 2017/04/26 16:10:04 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_malloc_zero(int nb) //returns string of 0s
{
	char	*str;
	int		i;

	str = malloc(nb * sizeof(char));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < nb - 1)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_append(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*res_str;

	res_str = ft_malloc_zero(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	while (s1[i] != '\0')
	{
		res_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		res_str[i] = s2[j];
		j++;
		i++;
	}
	res_str[i] = '\0';
	return (res_str);
}

void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0' && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

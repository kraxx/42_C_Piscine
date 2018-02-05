/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 16:31:11 by jchow             #+#    #+#             */
/*   Updated: 2017/04/13 20:15:22 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_count(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			size++;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		size;

	size = char_count(argc, argv);
	str = (char*)malloc(sizeof(*str) * (size + 1));
	i = 0;
	j = 1;
	while (j < argc)
	{
		k = 0;
		while (argv[j][k])
			str[i++] = argv[j][k++];
		j++;
		if (j != argc)
			str[i++] = '\n';
	}
	str[i] = '\0';
	return (str);
}

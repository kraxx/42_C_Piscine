/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 22:13:53 by jchow             #+#    #+#             */
/*   Updated: 2017/04/13 22:13:54 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	blank_check(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

char	**write_strings(char **arr, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (blank_check(str[i]))
		i++;
	while (str[i])
	{
		arr[j][k] = str[i];
		i++;
		k++;
		if (blank_check(str[i]))
		{
			arr[j][k] = '\0';
			j++;
			k = 0;
			while (blank_check(str[i]))
				i++;
		}
	}
	return (arr);
}

char		**char_count(char **arr, char *str)
{
	int i;
    int j;
    int size;

	i = 0;
    j = 0;
    size = 0;
    while (blank_check(str[i]))
        i++;
	while (str[i])
	{
        i++;
        if (str[i] == '\0' || !blank_check(str[i]))
        {
            arr[j] = (char*)malloc(sizeof(**arr) * (size + 1));
            j++;
            size = 0;
            while (blank_check(str[i]))
                i++;
        }
		size++;
	}
	return (arr);
}

char		**word_count(char **arr, char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
    while (blank_check(str[i]))
        i++;
	while (str[i])
	{
        i++;
        if (blank_check(str[i]) && !blank_check(str[i + 1]))
		{
            words++;
			while (blank_check(str[i]))
				i++;
		}
	}
	if (!blank_check(str[i - 1]))
		words++;
    arr = (char**)malloc(sizeof(*arr) * (words + 1));
    arr[words] = 0;
	return (arr);
}


char	**ft_split_whitespaces(char *str)
{
    char    **arr;

    arr = NULL;
	arr = word_count(arr, str);
    arr = char_count(arr, str);
    arr = write_strings(arr, str);
	return (arr);
}

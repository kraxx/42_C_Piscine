/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:04:29 by jchow             #+#    #+#             */
/*   Updated: 2017/04/13 14:06:32 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (max <= min)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

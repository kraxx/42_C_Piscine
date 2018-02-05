/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:04:29 by jchow             #+#    #+#             */
/*   Updated: 2017/04/13 16:31:03 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *size;

	if (max <= min)
		return (0);
	size = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		size[i++] = min++;
	*range = size;
	return (**range);
}

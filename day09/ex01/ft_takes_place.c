/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:37:59 by jchow             #+#    #+#             */
/*   Updated: 2017/04/13 21:40:29 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ampm_check(int hour)
{
	if (hour == 24)
		hour = 0;
	if (hour > 11 && hour < 24)
		return ('P');
	else
		return ('A');
}

void	ft_takes_place(int hour)
{
	int		time1;
	int		time2;
	char	ampm1;
	char	ampm2;

	if (hour < 0 || hour > 24)
		return ;
	ampm1 = ampm_check(hour);
	ampm2 = ampm_check(hour + 1);
	if (hour > 12)
		hour -= 12;
	if (hour == 0)
		hour = 12;
	time1 = hour;
	if (time1 == 12)
		time2 = 1;
	else
		time2 = time1 + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", time1, ampm1, time2, ampm2);
}

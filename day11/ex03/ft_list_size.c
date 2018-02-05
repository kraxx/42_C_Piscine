/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 12:58:34 by jchow             #+#    #+#             */
/*   Updated: 2017/04/19 21:42:49 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		acc;

	acc = 0;
	list = begin_list;
	if (list)
	{
		acc++;
		while (list->next)
		{
			list = list->next;
			acc++;
		}
	}
	return (acc);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 18:04:24 by jchow             #+#    #+#             */
/*   Updated: 2017/04/19 21:48:09 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*temp;

	list = NULL;
	while (*begin_list)
	{
		temp = (*begin_list)->next;
		(*begin_list)->next = list;
		list = *begin_list;
		*begin_list = temp;
	}
	*begin_list = list;
}

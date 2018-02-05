/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 21:20:40 by jchow             #+#    #+#             */
/*   Updated: 2017/04/19 21:20:42 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		(*f)(list->data);
		list = list->next;
	}
}

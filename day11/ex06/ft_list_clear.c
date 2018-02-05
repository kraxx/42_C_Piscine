/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:48:05 by jchow             #+#    #+#             */
/*   Updated: 2017/04/19 21:46:26 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*next_list;

	list = *begin_list;
	while (list)
	{
		next_list = list->next;
		free(list);
		list = next_list;
	}
	*begin_list = NULL;
}

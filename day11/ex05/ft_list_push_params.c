/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 14:12:01 by jchow             #+#    #+#             */
/*   Updated: 2017/04/19 21:45:29 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*prev;
	int		i;

	list = ft_create_elem(av[1]);
	prev = list;
	list->next = NULL;
	i = 2;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = prev;
		prev = list;
		i++;
	}
	return (list);
}

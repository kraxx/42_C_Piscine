/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:57:27 by jchow             #+#    #+#             */
/*   Updated: 2017/04/19 21:47:18 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;
	unsigned int	i;

	if (!begin_list)
		return (NULL);
	i = 0;
	list = begin_list;
	while (i < nbr)
	{
		if (list->next)
			list = list->next;
		else
			return (NULL);
		i++;
	}
	return (list);
}

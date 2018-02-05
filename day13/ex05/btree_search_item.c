/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 02:59:31 by jchow             #+#    #+#             */
/*   Updated: 2017/04/21 05:12:31 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	void	*data;

	data = NULL;
	if (root)
	{
		data = btree_search_item(root->left, data_ref, cmpf);
		if (!data && (*cmpf)(root->item, data_ref) == 0)
			data = root->item;
		if (!data)
			data = btree_search_item(root->right, data_ref, cmpf);
	}
	return (data);
}

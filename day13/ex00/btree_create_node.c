/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 02:59:31 by jchow             #+#    #+#             */
/*   Updated: 2017/04/21 05:09:14 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree*)malloc(sizeof(*node));
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}

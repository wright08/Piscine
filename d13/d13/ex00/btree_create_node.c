/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:17:17 by rwright           #+#    #+#             */
/*   Updated: 2019/01/24 10:37:12 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *node;

	if ((node = malloc(sizeof(t_btree))) == 0)
		return (0);
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}

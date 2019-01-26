/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 14:40:24 by rwright           #+#    #+#             */
/*   Updated: 2019/01/25 22:12:26 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if ((*cmpf)(root->item, data_ref) > 0)
			return (btree_search_item(root->left, data_ref, cmpf));
		else if ((*cmpf)(root->item, data_ref) == 0)
			return (root->item);
		else
			return (btree_search_item(root->right, data_ref, cmpf));
	}
	return ((void *)0);
}

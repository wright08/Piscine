/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 20:46:17 by rwright           #+#    #+#             */
/*   Updated: 2019/01/24 22:16:55 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

int		*g_is_first_elem;

int		max(int i1, int i2)
{
	if (i1 > i2)
		return (i1);
	return (i2);
}

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	else if (!root->left && !root->right)
		return (1);
	else if (root->left && !root->right)
		return (1 + btree_level_count(root->left));
	else if (root->right && !root->left)
		return (1 + btree_level_count(root->right));
	else
		return (max(1 + btree_level_count(root->left),
					1 + btree_level_count(root->right)));
}

void	set_first_elem_array(t_btree *root)
{
	int		size;
	int		i;

	size = btree_level_count(root);
	g_is_first_elem = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
		g_is_first_elem[i++] = 1;
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	static int levels = 0;

	if (levels == 0)
		set_first_elem_array(root);
	if (root)
	{
		(*applyf)(root->item, levels, g_is_first_elem[levels] == 1 ? 1 : 0);
		g_is_first_elem[levels]++;
		levels++;
		if (root->left)
			btree_apply_by_level(root->left, applyf);
		if (root->right)
			btree_apply_by_level(root->right, applyf);
		levels--;
	}
}

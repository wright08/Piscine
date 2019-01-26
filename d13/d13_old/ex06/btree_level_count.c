/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:48:48 by rwright           #+#    #+#             */
/*   Updated: 2019/01/24 19:34:28 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

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

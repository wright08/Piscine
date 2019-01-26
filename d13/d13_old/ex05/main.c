/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:30:17 by pheilbro          #+#    #+#             */
/*   Updated: 2019/01/24 18:02:18 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <string.h>
#include <stdio.h>

void	btree_apply_infix(t_btree *root, void (*applyf)(void *));

void	putstr(void *str)
{
	printf("%s\n", (char *)str);
}

int		main(void)
{
	t_btree	*tree;
	t_btree *tree2;
	t_btree	*found;

	tree = btree_create_node("200");
	tree->left = btree_create_node("100");
	tree->right = btree_create_node("400");
	tree->left->left = btree_create_node("50");
	tree->left->right = btree_create_node("150");
	tree->right->left = btree_create_node("300");
	tree->right->right = btree_create_node("600");
	tree2 = btree_create_node("200");
	btree_insert_data(&tree2, "100", (int (*)(void *, void *))(strcmp));
	btree_insert_data(&tree2, "400", (int (*)(void *, void *))(strcmp));
	btree_insert_data(&tree2, "50", (int (*)(void *, void *))(strcmp));
	btree_insert_data(&tree2, "150", (int (*)(void *, void *))(strcmp));
	btree_insert_data(&tree2, "300", (int (*)(void *, void *))(strcmp));
	btree_insert_data(&tree2, "600", (int (*)(void *, void *))(strcmp));
//	btree_apply_infix(tree, &putstr);
//	printf("\n");
//	found = btree_search_item(tree, "400", (int (*)(void *, void *))(strcmp));
//	btree_apply_infix(found, &putstr);
//	printf("\n");
//	found = btree_search_item(tree, "200", (int (*)(void *, void *))(strcmp));
//	btree_apply_infix(found, &putstr);
//	printf("\n");
//	found = btree_search_item(tree, "300", (int (*)(void *, void *))(strcmp));
//	btree_apply_infix(found, &putstr);
//	printf("\n");
	found = btree_search_item(tree2, "50", (int (*)(void *, void *))(strcmp));
	btree_apply_infix(tree2, &putstr);
	printf("\n");
	return (0);
}


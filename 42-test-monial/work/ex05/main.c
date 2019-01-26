


		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>

		#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
		#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

	#include "ft_btree.h"
#include <string.h>
#include <stdio.h>
void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));
void	bai(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		bai(root->left, applyf);
		applyf(root->item);
		bai(root->right, applyf);
	}
}
t_btree		*bcn(void *item)
{
	t_btree *node;
	node = malloc(sizeof(t_btree));
	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
}
void	b_in(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree **node_it;
	if(*root)
	{
		node_it = root;
		while (*node_it) {
			if (cmpf(item, (*node_it)->item) >= 0)
				node_it = &((*node_it)->right);
			else
				node_it = &((*node_it)->left);
		}
		*node_it = bcn(item);
	}
	else
	{
		*root = bcn(item);
	}
}
int main()
{
	t_btree* root = 0;
	b_in(&root, "6", (int(*)(void *, void *))strcmp);
	b_in(&root, "4", (int(*)(void *, void *))strcmp);
	b_in(&root, "7", (int(*)(void *, void *))strcmp);
	b_in(&root, "3", (int(*)(void *, void *))strcmp);
	b_in(&root, "5", (int(*)(void *, void *))strcmp);
	printf("%s\n", btree_search_item(root, "3", (int(*)(void *, void *))strcmp));
	printf("%s\n", btree_search_item(root, "1", (int(*)(void *, void *))strcmp));
	printf("%s\n", btree_search_item(root, "5", (int(*)(void *, void *))strcmp));
}



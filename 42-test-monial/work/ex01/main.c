


		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>

		#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
		#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

	#include "ft_btree.h"
#include <string.h>
#include <stdio.h>
void	btree_apply_prefix(t_btree *root, void (applyf)(void *));
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
	btree_apply_prefix(root, (void(*)(void *))printf);
	printf("\n");
	b_in(&root, "6", (int(*)(void *, void *))strcmp);
	b_in(&root, "4", (int(*)(void *, void *))strcmp);
	b_in(&root, "7", (int(*)(void *, void *))strcmp);
	b_in(&root, "3", (int(*)(void *, void *))strcmp);
	b_in(&root, "5", (int(*)(void *, void *))strcmp);
	btree_apply_prefix(root, (void(*)(void *))printf);
}



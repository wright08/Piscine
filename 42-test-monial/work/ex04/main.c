


		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>

		#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
		#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

	#include "ft_btree.h"
#include <string.h>
#include <stdio.h>
void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void	bai(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		bai(root->left, applyf);
		applyf(root->item);
		bai(root->right, applyf);
	}
}
t_btree		*btree_create_node(void *item)
{
	t_btree *node;
	node = malloc(sizeof(t_btree));
	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
}
int main()
{
	t_btree* root = 0;
	btree_insert_data(&root, "6", (int(*)(void *, void *))strcmp);
	btree_insert_data(&root, "4", (int(*)(void *, void *))strcmp);
	btree_insert_data(&root, "7", (int(*)(void *, void *))strcmp);
	btree_insert_data(&root, "3", (int(*)(void *, void *))strcmp);
	btree_insert_data(&root, "5", (int(*)(void *, void *))strcmp);
	bai(root, (void(*)(void *))printf);
}



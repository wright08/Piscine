


		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>

		#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
		#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

	#include "ft_btree.h"
t_btree		*btree_create_node(void *item);
int main()
{
	t_btree* node = btree_create_node("asdf");
	printf("%s\n", (char*)node->item);
	printf("%p\n", node->left);
	printf("%p\n", node->right);
}



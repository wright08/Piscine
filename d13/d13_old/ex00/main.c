#include "ft_btree.h"
#include <stdio.h>

int		main(void)
{
	t_btree *tree = btree_create_node("head");
	if (tree)
		printf("%s\n", tree->item);
	return (0);
}

#include "ft_btree.h"
#include <stdio.h>
#include <string.h>

void	ft_edit(void *item, int cur_level, int is_first)
{
	if (is_first)
		*((int *)item) = 10 * cur_level;
	else
		*((int *)item) = 100 * cur_level;
}

void	print(void *item)
{
	printf("%d\n", *((int *)item));
}

int		main(void)
{
	t_btree *list = 0;
	int orig1 = 5;
	int orig2 = 1;
	int orig3 = 7;
//	int orig4 = 3;
//	int orig5 = 2;
	int orig6 = 6;
	int orig7 = 8;
	int orig8 = 9;

	int *i1 = &orig1;
	int *i2 = &orig2;
	int *i3 = &orig3;
//	int *i4 = &orig4;
//	int *i5 = &orig5;
	int *i6 = &orig6;
	int *i7 = &orig7;
	int *i8 = &orig8;


	btree_insert_data(&list, i1, (int (*)(void *, void *))(strcmp));
	btree_insert_data(&list, i2, (int (*)(void *, void *))(strcmp));
	btree_insert_data(&list, i3, (int (*)(void *, void *))(strcmp));
//	btree_insert_data(&list, i4, (int (*)(void *, void *))(strcmp));
//	btree_insert_data(&list, i5, (int (*)(void *, void *))(strcmp));
	btree_insert_data(&list, i6, (int (*)(void *, void *))(strcmp));
	btree_insert_data(&list, i7, (int (*)(void *, void *))(strcmp));
	btree_insert_data(&list, i8, (int (*)(void *, void *))(strcmp));
	btree_apply_prefix(list, &print);
	btree_apply_by_level(list, &ft_edit);
	printf("\n\n\n\n\n\n");
	btree_apply_prefix(list, &print);
	return (0);
}

#include "ft_btree.h"
#include <stdio.h>

int		ft_strcmp(void *s1, void *s2)
{
	unsigned char *s1_u;
	unsigned char *s2_u;

	s1_u = (unsigned char *)s1;
	s2_u = (unsigned char *)s2;
	while (*s1_u && *s2_u)
	{
		if (*s1_u < *s2_u)
			return (*s1_u - *s2_u);
		else if (*s1_u > *s2_u)
			return (*s1_u - *s2_u);
		s1_u++;
		s2_u++;
	}
	if (!*s1_u && *s2_u)
		return (-*s2_u);
	else if (*s1_u && !*s2_u)
		return (*s1_u);
	return (0);
}

void	print(void *item)
{
	printf("%s\n", item);
}

int		main(void)
{
	t_btree *tree = 0;
	btree_insert_data(&tree, "5", &ft_strcmp);
	btree_insert_data(&tree, "1", &ft_strcmp);
	btree_insert_data(&tree, "0", &ft_strcmp);
	btree_insert_data(&tree, "3", &ft_strcmp);
	btree_insert_data(&tree, "6", &ft_strcmp);
	t_btree *found = btree_search_item(tree, "2", &ft_strcmp);
	if (found)
		print(found->item);
	return (0);
}

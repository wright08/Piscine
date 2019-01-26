#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	int data;
	data = 12;

	t_list *test;
	test = ft_create_elem(&data);

	printf("%d\n", *(int *)test->data);
	data = 16;
	printf("%d\n", *(int *)test->data);
	return (0);
}

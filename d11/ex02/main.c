#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	int data = 42;
	int data2 = 21;
	t_list *test = 0;
	ft_list_push_front(&test, &data2);
	printf("%d\n", *(int *)test->data);
	ft_list_push_front(&test, &data);
	printf("%d\n", *(int *)test->data);
	return (0);
}

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	t_list *list;
	ft_list_push_back(&list, "h1");

	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	t_list *tail = ft_create_elem("one");
	ft_list_push_back(&tail, "two");
	ft_list_push_back(&tail, "three");

	ft_list_merge(&list, tail);
	return (0);
}

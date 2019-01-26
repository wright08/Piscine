#include "ft_list.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list *list = ft_list_push_params(argc, argv);
	ft_list_reverse(&list);
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	return (0);
}

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	t_list *list = 0;
	ft_list_push_back(&list, "1");
	ft_list_push_back(&list, "2");
	ft_list_push_back(&list, "3");
	ft_list_push_back(&list, "4");
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	return(0);
}

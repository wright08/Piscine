#include "ft_list.h"
#include "stdio.h"

int		main(void)
{
	t_list *list = 0;
//	ft_list_push_back(&list, "abc");
//	ft_list_push_back(&list, "last");
//	ft_list_push_front(&list, "head");
	t_list *ret = ft_list_last(list);
	if (!ret)
		printf("Suh\n");
	return (0);
}

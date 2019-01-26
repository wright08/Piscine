#include "ft_list.h"
#include <stdio.h>

int		ft_strcmp(void *s1, void *s2);

int		main(int argc, char **argv)
{
	t_list *list = ft_list_push_params(argc, argv);
	t_list *item = ft_list_find(list, "a", &ft_strcmp);
	while (item)
	{
		printf("%s\n", item->data);
		item = item->next;
	}
	return(0);
}

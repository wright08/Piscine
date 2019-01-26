#include "ft_list.h"
#include <stdio.h>

int		is_a(char *s1, char *s2)
{
	return (!(*s1 == *s2));
}

int		main(int argc, char **argv)
{
	t_list *list = ft_list_push_params(argc, argv);
	ft_list_remove_if(&list, "a", &is_a);
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	return (0);
}

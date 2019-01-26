#include "ft_list.h"
#include <stdio.h>

void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int		main(int argc, char **argv)
{
	t_list *list = ft_list_push_params(argc, argv);
	ft_list_foreach(list, &print_data);
	return (0);
}

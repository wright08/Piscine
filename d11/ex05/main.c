#include "ft_list.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list *params = ft_list_push_params(argc, argv);
	while (params)
	{
		printf("%s\n", params->data);
		params = params->next;
	}
	return (0);
}

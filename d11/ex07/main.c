#include "ft_list.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list *list = ft_list_push_params(argc, argv);
	if (ft_list_at(list, 0))
		printf("%s\n", ft_list_at(list, 0)->data);
	return (0);
}

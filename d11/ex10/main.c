#include "ft_list.h"
#include <stdio.h>

int		ft_strcmp(void *s1, void *s2);

void	print_data(void *str)
{
	printf("%s\n", (char *)str);
}

int		main(int argc, char **argv)
{
	t_list *list = ft_list_push_params(argc, argv);
	ft_list_foreach_if(list, &print_data, "a", &ft_strcmp);
	return (0);
}

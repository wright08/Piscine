#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	t_list *test = 0;
	printf("%d\n", ft_list_size(test));
	ft_list_push_back(&test, "bcde");
	printf("%d\n", ft_list_size(test));
	ft_list_push_front(&test, "abc");
	printf("%d\n", ft_list_size(test));
}

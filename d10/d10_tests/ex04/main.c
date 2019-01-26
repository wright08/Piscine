#include <stdio.h>

int		ft_count_if(char **arr, int (*f)(char *));
int		ft_a(char *c)
{
	return (*c == 'a');
}

int		main(void)
{
	char *arr[] = {"noa", "a1", "no2a", "a2", "aaaaa3", 0};
	printf("%d\n", ft_count_if(arr, &ft_a));
	return (0);
}

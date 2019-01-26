#include <stdio.h>

int		*ft_map(int *arr, int len, int (*f)(int));

int		add_one(int n)
{
	return (n + 1);
}

int		main(void)
{
	int arr[] = {3, 1, 8, 5};
	int *new;
	new = ft_map(arr, 4, &add_one);
	for (int i = 0; i < 4; i++)
		printf("%d\n", new[i]);
	return (0);
}

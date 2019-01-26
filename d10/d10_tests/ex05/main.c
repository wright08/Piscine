#include <stdio.h>

int		ft_is_sort(int *arr, int len, int (*f)(int, int));

int		ft_intcmp(int a, int b)
{
	return (a - b);
}
int		main(void)
{
	int arr[1];
	printf("%d\n", ft_is_sort(arr, 4, &ft_intcmp));
	return (0);
}

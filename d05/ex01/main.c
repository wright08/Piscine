#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int n);

int		main(void)
{
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(INT_MIN);
	printf("\n");
	ft_putnbr(INT_MAX);
	printf("\n");
}

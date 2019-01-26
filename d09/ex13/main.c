#include <stdio.h>

int		ft_compact(char **tab, int len);

int		main(void)
{
	char *tab[3] = {"abcd", "123", "3"};

	printf("%d\n", ft_compact(tab, 4));
	return (0);
}

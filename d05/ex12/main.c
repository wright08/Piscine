#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char *str = "123";
	printf("%d\n", ft_str_is_numeric(str));
	str = "1abc";
	printf("%d\n", ft_str_is_numeric(str));
	str = "";
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}

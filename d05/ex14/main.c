#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char *str = "UPPER";
	printf("%d\n", ft_str_is_uppercase(str));
	str = "lower";
	printf("%d\n", ft_str_is_uppercase(str));
	str = "";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
	printf("%d\n", ft_str_is_uppercase(str));
}

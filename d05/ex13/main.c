#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int main()
{
	char *str = "";
	printf("%d\n", ft_str_is_lowercase(str));
	str = "lowercase";
	printf("%d\n", ft_str_is_lowercase(str));
	str = "UPPER";
	printf("%d\n", ft_str_is_lowercase(str));
	return (1);
}

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "UPPERCASE lowercase 123";
	printf("%s\n", ft_strlowcase(str));

	return (0);
}

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str[] = "lower case words UPPER";
	printf("%s\n", ft_strupcase(str));

	return (0);
}

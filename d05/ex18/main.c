#include <stdio.h>
#include <string.h>

unsigned int 	ft_strlcat(char *dst, char *src, unsigned int size);

int		main(void)
{
	char a[256] = "\0xxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	printf("%d, %s\n", ft_strlcat(a, "asdf", 16), a);
	printf("%d, %s\n", ft_strlcat(a, "asdf", 6), a);
	printf("%d, %s\n", ft_strlcat(a, "asdf", 4), a);
	printf("%d, %s\n", ft_strlcat(a, "", 16), a);
	printf("%d, %s\n", ft_strlcat(a, "asdf", 0), a);
	return (0);
}

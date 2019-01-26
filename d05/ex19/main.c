#include <stdio.h>
#include <string.h>

unsigned int 	ft_strlcpy(char *dst, char *src, unsigned int size);

int		main(void)
{
	char a[256] = "\0zxcvzxcvzxcvxzcvzxcv";

//	printf("%ld, %s|\n", strlcpy(a, b, 0), a);
	printf("%d, %s\n", ft_strlcpy(a, "", 5), a);
	return (0);
}

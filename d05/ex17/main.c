char	*ft_strncat(char *dst, char *src, int n);

#include <stdio.h>
#include <string.h>

int main()
{
	char a[20] = "";
	char b[] = " more";
	int n = 5;
	//printf("%s\n", strncat(a, b, n));
	printf("%s\n", ft_strncat(a, b, n));
	return (0);
}

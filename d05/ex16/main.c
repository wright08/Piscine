char	*ft_strcat(char *dst, char *src);

#include <stdio.h>
int main()
{
	char a[50] = "";
	char b[] = "tslei";
	a[0] = 'a';
	a[1] = 'a';
	a[2] = 'a';
	a[4] = 'a';
	a[4] = 'a';
	a[5] = '\0';
	printf("%s\n", ft_strcat(a, b));

	return (0);
}

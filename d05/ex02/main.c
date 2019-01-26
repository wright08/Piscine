#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("Real: %d\n", 	atoi("0"));
	printf("User: %d\n\n", 	ft_atoi("0"));

	printf("Real: %d\n", 	atoi("-2147483648"));
	printf("User: %d\n\n", 	ft_atoi("-2147483648"));

	printf("Real: %d\n", 	atoi("2147483647"));
	printf("User: %d\n\n", 	ft_atoi("2147483647"));

	printf("Real: %d\n", 	atoi("0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("0123abce1123"));

	printf("Real: %d\n", 	atoi("abcd123"));
	printf("User: %d\n\n", 	ft_atoi("abcd123"));

	printf("Real: %d\n", 	atoi("+0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("+0123abce1123"));

	printf("Real: %d\n", 	atoi("      +0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("      +0123abce1123"));

	printf("Real: %d\n", 	atoi("  + 	0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("  + 	0123abce1123"));
}

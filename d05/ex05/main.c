#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *haystack, char *needle);

int		main(void)
{
	char *haystack = "issa lotfindmeta words";
	char *needle = "findme";
	printf("Real: %s\nUser: %s\n\n", strstr(haystack, needle), ft_strstr(haystack, needle));

	char *haystack_1 = "issa lotfindmeta words";
	char *needle_1 = "noneasdf";
	printf("Real: %s\nUser: %s\n\n", strstr(haystack_1, needle_1), ft_strstr(haystack_1, needle_1));
	return (0);
}

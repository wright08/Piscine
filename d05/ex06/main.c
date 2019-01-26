#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("Real: %d\nUser: %d\n\n", strcmp("a", "a"), ft_strcmp("a", "a")); 
	printf("Real: %d\nUser: %d\n\n", strcmp("a", "b"), ft_strcmp("a", "b")); 
	printf("Real: %d\nUser: %d\n\n", strcmp("b", "a"), ft_strcmp("b", "a")); 
	printf("Real: %d\nUser: %d\n\n", strcmp("a", "ab"), ft_strcmp("a", "ab")); 
	printf("Real: %d\nUser: %d\n\n", strcmp("ab", "a"), ft_strcmp("ab", "a")); 
	return (0);
}

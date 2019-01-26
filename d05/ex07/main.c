#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("Real: %d\nUser: %d\n\n", strncmp("a", "a", 1), ft_strncmp("a", "a", 1)); 
	printf("Real: %d\nUser: %d\n\n", strncmp("a", "b", 1), ft_strncmp("a", "b", 1)); 
	printf("Real: %d\nUser: %d\n\n", strncmp("b", "a", 1), ft_strncmp("b", "a", 1)); 
	printf("Real: %d\nUser: %d\n\n", strncmp("a", "ab", 3), ft_strncmp("a", "ab", 3)); 
	printf("Real: %d\nUser: %d\n\n", strncmp("ab", "a", 1), ft_strncmp("ab", "a", 1)); 
	return (0);
}

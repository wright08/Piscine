#include <stdio.h>

char	*ft_strdup(char *str);
char 	**ft_split_whitespaces(char *str);

void	print_array(char **arr)
{
	while (*arr)
		printf("%s\n", *(arr++));
}

int		main(void)
{
	char *str = "b             a";
	print_array(ft_split_whitespaces(str));
	return (0);
}

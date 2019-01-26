#include <stdio.h>

char	*get_next_word(char *str, char *sep);
int		len(char *str);
int		count_words(char *str, char *sep);
char	**ft_split(char *str, char *sep);

void	print(char **arr)
{
	while (*arr)
		printf("%s\n", *arr++);
}

int		main(void)
{
	char *str = "  basdb	ll   	   b";
	char *sep = " \t";

	print(ft_split(str, sep));
	return (0);
}

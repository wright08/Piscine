#include <stdio.h>

void	ft_sort_wordtab(char **tab);
char 	**ft_split_whitespaces(char *str);

int		main(void)
{
	char *str = "bb		a d_b";
	char **ret;
	ret = ft_split_whitespaces(str);
	ft_sort_wordtab(ret);
	int i = 0;
	while (ret[i])
		printf("%s\n", ret[i++]);
	return (0);
}

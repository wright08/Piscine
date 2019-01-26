#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));
char	**ft_split_whitespaces(char *str);

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *s1_u;
	unsigned char *s2_u;

	s1_u = (unsigned char *)s1;
	s2_u = (unsigned char *)s2;
	while (*s1_u && *s2_u)
	{
		if (*s1_u < *s2_u)
			return (*s1_u - *s2_u);
		else if (*s1_u > *s2_u)
			return (*s1_u - *s2_u);
		s1_u++;
		s2_u++;
	}
	if (!*s1_u && *s2_u)
		return (-*s2_u);
	else if (*s1_u && !*s2_u)
		return (*s1_u);
	return (0);
}

int		ft_strlencmp(char *s1, char *s2)
{
	while (*s1++ && *s2++)
		;
	if (*s1)
		return (1);
	else if (*s2)
		return (-1);
	return (0);
}

int		main(void)
{
	int i;

	char *str = "bbb  a		aaaaa";
	char **split = ft_split_whitespaces(str);
	ft_advanced_sort_wordtab(split, &ft_strlencmp);
	i = 0;
	while (split[i])
		printf("%s\n", split[i++]);
	return (0);
}

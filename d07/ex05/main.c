void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char *str = "one \ntwonothtree  three        four";
	ft_print_words_tables(ft_split_whitespaces(str));
	return (0);
}

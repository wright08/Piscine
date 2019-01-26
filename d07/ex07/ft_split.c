/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 08:26:30 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 10:28:56 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *str)
{
	int len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		is_sep(char *c, char *sep)
{
	while (*sep)
		if (*sep++ == *c)
			return (1);
	return (0);
}

int		count_words(char *str, char *sep)
{
	int words;

	words = 0;
	while (*str)
	{
		while (*str && is_sep(str, sep))
			str++;
		if (*str)
			words++;
		while (*str && !is_sep(str, sep))
			str++;
	}
	return (words);
}

char	*get_next_word(char *str, char *sep)
{
	char	*word;
	int		len;

	while (*str && is_sep(str, sep))
		str++;
	if (!*str)
		return ((void *)0);
	len = 0;
	while (str[len] && !is_sep(&str[len], sep))
		len++;
	word = malloc((len + 1) * sizeof(char));
	word[len] = '\0';
	while (--len >= 0)
		word[len] = str[len];
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	char	**ret;
	int		words;
	int		i;

	ret = malloc((count_words(str, sep) + 1) * sizeof(char *));
	i = 0;
	words = count_words(str, sep);
	while (i < words)
	{
		while (*str && is_sep(str, sep))
			str++;
		if (*str)
			ret[i++] = get_next_word(str, sep);
		while (*str && !is_sep(str, sep))
			str++;
	}
	ret[i] = 0;
	return (ret);
}

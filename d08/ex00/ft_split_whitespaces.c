/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:10:48 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 22:24:03 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int		words;
	int		last_was_sep;

	words = 0;
	last_was_sep = 1;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n')
			last_was_sep = 1;
		else
		{
			if (last_was_sep)
				words++;
			last_was_sep = 0;
		}
		str++;
	}
	return (words);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*ret;

	len = 0;
	while (str[len] && str[len] != ' ' && str[len] != '\t' &&
			str[len] != '\v' && str[len] != '\n')
		len++;
	ret = malloc((len + 1) * sizeof(char));
	ret[len] = '\0';
	while (--len >= 0)
		ret[len] = str[len];
	return (ret);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		words;
	int		i;

	words = count_words(str);
	ret = malloc((words + 1) * sizeof(size_t));
	i = 0;
	while (i < words)
	{
		while (*str == ' ' || *str == '\t' ||
				*str == '\v' || *str == '\n')
			str++;
		if (*str)
			ret[i] = ft_strdup(str);
		while (*str && *str != ' ' && *str != '\t' &&
				*str != '\v' && *str != '\n')
			str++;
		i++;
	}
	ret[i] = 0;
	return (ret);
}

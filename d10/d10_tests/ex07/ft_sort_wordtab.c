/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 08:53:55 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 18:49:27 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		min;
	char	*swap;

	i = *tab ? 0 : -1;
	while (tab[i + 1])
	{
		min = i;
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[j], tab[min]) < 0)
				min = j;
			j++;
		}
		if (min != i)
		{
			swap = tab[min];
			tab[min] = tab[i];
			tab[i] = swap;
		}
		i++;
	}
}

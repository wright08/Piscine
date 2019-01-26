/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 09:32:45 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 09:50:53 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		min;
	char	*swap;

	i = 0;
	while (tab[i + 1])
	{
		min = i;
		j = i + 1;
		while (tab[j])
		{
			if ((*cmp)(tab[j], tab[min]) < 0)
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

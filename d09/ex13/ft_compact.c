/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 07:45:50 by rwright           #+#    #+#             */
/*   Updated: 2019/01/18 11:26:54 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*get_next_string(char **tab, int len)
{
	int i;

	i = 0;
	while (*tab[i] == 0 && i < len)
		i++;
	return tab[i];
}

int		ft_compact(char **tab, int len)
{
	char 	*swap;
	int		dead_slots;
	int		i;

	dead_slots = 0;
	i = 0;
	while (i < len)
	{
		while (i < len && *tab[i] != 0)
			i++;
		if (i < len && *tab[i] == 0)
		{
			dead_slots++;
			swap = tab[i];
			tab[i] = get_next_string(&tab[i], len);
			*swap = 0;
			i++;
		}
	}
	return (len - dead_slots);
}

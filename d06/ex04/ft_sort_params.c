/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 10:07:12 by rwright           #+#    #+#             */
/*   Updated: 2019/01/16 07:18:07 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (!*s1 && *s2)
		return (-*s2);
	else if (*s1 && !*s2)
		return (*s1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	print_params(int len, char **params)
{
	char	*min;
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (!*params[j])
			j++;
		min = params[j];
		j = 0;
		while (j < len)
		{
			if (*params[j] && ft_strcmp(min, params[j]) > 0)
				min = params[j];
			j++;
		}
		ft_putstr(min);
		*min = '\0';
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*ret[argc - 1];

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		if (!*argv[i + 1])
			ft_putchar('\n');
		else
			ret[j++] = argv[i + 1];
		i++;
	}
	print_params(j, ret);
	return (0);
}

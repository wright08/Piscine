/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:54:39 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 15:41:47 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				**ft_split_whitespaces(char *str);

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char				*ft_strdup(char *str)
{
	char	*ret;
	int		i;

	ret = malloc((ft_strlen(str) + 1) * sizeof(char));
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

struct s_stock_par	*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par	*ret;
	int			i;

	ret = malloc((argc + 1) * sizeof(t_stock_par));
	i = 0;
	while (i < argc)
	{
		ret[i].size_param = ft_strlen(argv[i]);
		ret[i].str = argv[i];
		ret[i].copy = ft_strdup(argv[i]);
		ret[i].tab = ft_split_whitespaces(argv[i]);
		i++;
	}
	ret[i].str = 0;
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 12:26:10 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 19:36:04 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*ret;
	int		len;
	int		i;

	i = 1;
	len = 0;
	while (i < argc)
		len += ft_strlen(argv[i++]);
	ret = malloc((len + argc - 1) * sizeof(char));
	i = 0;
	len = 0;
	while (i < argc - 1)
	{
		while (*argv[i + 1])
			ret[len++] = *(argv[i + 1]++);
		if (i + 1 < argc - 1)
			ret[len++] = '\n';
		else
			ret[len] = '\0';
		i++;
	}
	ret[len] = '\0';
	return (ret);
}

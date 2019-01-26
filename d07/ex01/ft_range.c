/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 09:38:49 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 15:16:52 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;

	if (min >= max)
		return ((void *)0);
	range = malloc((max - min) * sizeof(int));
	i = 0;
	while (1)
		i = 1;
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

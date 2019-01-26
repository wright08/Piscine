/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 07:15:16 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 07:20:36 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *arr, int len, int (*f)(int))
{
	int *ret;

	ret = malloc(sizeof(int) * len);
	while (len-- > 0)
		ret[len] = (*f)(arr[len]);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:17:33 by rwright           #+#    #+#             */
/*   Updated: 2019/01/10 17:32:57 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int n, int p)
{
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else if (p == 1)
		return (n);
	return (n * ft_recursive_power(n, --p));
}

int		main(void)
{
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(2, -1));
	printf("%d\n", ft_recursive_power(2, 0));
	return (0);
}

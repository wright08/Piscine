/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:31:18 by rwright           #+#    #+#             */
/*   Updated: 2019/01/10 17:04:20 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	else if (n == 1)
		return (1);
	return (n * ft_recursive_factorial(n - 1));
}

int		main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(-1));
	printf("%d\n", ft_recursive_factorial(10));
}

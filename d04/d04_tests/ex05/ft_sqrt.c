/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 22:17:06 by rwright           #+#    #+#             */
/*   Updated: 2019/01/11 06:55:18 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int n)
{
	double 	guess;
	int		iter;

	guess = n / 2;
	iter = 0;
	while (iter++ < 10)
	{
		guess = (guess + n / guess) / 2;
	}
	return (guess - (int) guess < 0.001 ? (int) guess : 0);
}

int		main()
{
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(12));
	printf("%d\n", ft_sqrt(-2));
	printf("%d\n", ft_sqrt(0));
}

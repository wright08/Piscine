/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 09:27:26 by rwright           #+#    #+#             */
/*   Updated: 2019/01/11 11:28:46 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int n)
{
	double	i;
	double	j;
	double 	sqrt;
	int		flag;
	if (n < 2)
		return (2);
	i = n + 1;
	while (i > 0)
	{
		j = 0;
		while (j++ < 10)
			sqrt = (i + i / sqrt) / 2;
		j = 2;
		flag = 0;
		while (j <= sqrt)
		{
			if (i / j == (int) (i / j))
			{
				flag = 1;
				break;
			}
			if (!flag)
				return i;
			j++;
		}
		i++;
	}
	return n;
}

int		main()
{
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(-1));
}

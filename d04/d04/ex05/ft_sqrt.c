/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 22:17:06 by rwright           #+#    #+#             */
/*   Updated: 2019/01/12 14:41:21 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int n)
{
	double	guess;
	int		iter;

	if (n < 0)
		return (0);
	else if (n == 1)
		return (1);
	guess = n / 2;
	iter = 0;
	while (iter++ < 10)
		guess = (guess + n / guess) / 2;
	return (guess - (int)guess < 0.001 ? (int)guess : 0);
}

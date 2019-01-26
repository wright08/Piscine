/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:40:54 by rwright           #+#    #+#             */
/*   Updated: 2019/01/14 18:54:55 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putnbr(int n)
{
	long overflow;

	if (n < 0)
	{
		ft_putchar('-');
		overflow = n;
		ft_putnbr(-overflow / 10);
		ft_putchar(-overflow % 10 + '0');
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

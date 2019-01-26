/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 16:09:44 by rwright           #+#    #+#             */
/*   Updated: 2019/01/10 13:34:32 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putnbr(int num)
{
	int		numc;
	long	num_reverse;
	long	numn;

	numc = num;
	numn = num;
	if (num < 0)
	{
		ft_putchar('-');
		numn = -numn;
	}
	num_reverse = 0;
	while (numn != 0)
	{
		num_reverse = num_reverse * 10 + numn % 10;
		numn /= 10;
	}
	while (num_reverse > 0)
	{
		ft_putchar(num_reverse % 10 + '0');
		num_reverse /= 10;
	}
	if (numc % 10 == 0)
		ft_putchar('0');
}

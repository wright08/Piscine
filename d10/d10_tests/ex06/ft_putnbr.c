/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:40:54 by rwright           #+#    #+#             */
/*   Updated: 2019/01/16 22:28:29 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	long overflow;

	if (n < 0)
	{
		ft_putchar('-');
		overflow = n;
		if (n < -9)
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

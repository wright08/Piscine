/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:46:06 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 16:33:19 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

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

void	ft_show_tab(struct s_stock_par *par)
{
	while (*(par->str))
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		while (par->tab)
		{
			ft_putstr(*(par->tab++));
			ft_putchar('\n');
		}
		par++;
	}
	ft_putchar('\n');
	ft_putchar('0');
	ft_putchar('\n');
}

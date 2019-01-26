/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 08:45:36 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 08:47:14 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int ret;
	int neg;

	ret = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if ((neg = *str == '-') || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		ret = ret * 10 + *(str++) - '0';
	return (neg ? -ret : ret);
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

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (*argv[2] == '+')
		ft_putnbr(a + b);
	else if (*argv[2] == '-')
		ft_putnbr(a - b);
	else if (*argv[2] == '*')
		ft_putnbr(a * b);
	else if (*argv[2] == '/')
		b == 0 ? ft_putstr("Stop : division by zero") : ft_putnbr(a / b);
	else if (*argv[2] == '%')
		b == 0 ? ft_putstr("Stop : modulo by zero") : ft_putnbr(a % b);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}

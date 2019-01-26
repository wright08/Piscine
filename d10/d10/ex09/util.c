/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:06:19 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 14:37:38 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
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

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
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

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *s1_u;
	unsigned char *s2_u;

	s1_u = (unsigned char *)s1;
	s2_u = (unsigned char *)s2;
	while (*s1_u && *s2_u)
	{
		if (*s1_u < *s2_u)
			return (*s1_u - *s2_u);
		else if (*s1_u > *s2_u)
			return (*s1_u - *s2_u);
		s1_u++;
		s2_u++;
	}
	if (!*s1_u && *s2_u)
		return (-*s2_u);
	else if (*s1_u && !*s2_u)
		return (*s1_u);
	return (0);
}

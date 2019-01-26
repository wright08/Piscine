/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 20:51:02 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 07:15:58 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		len(char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

int		check_base(char *base)
{
	int i;
	int j;

	if (len(base) > 1)
	{
		i = 0;
		while (base[i])
		{
			j = 0;
			if (base[i] == '+' || base[i] == '-')
				return (-1);
			while (j < i)
			{
				if (base[j] == base[i])
					return (-1);
				j++;
			}
			i++;
		}
		return (len(base));
	}
	return (-1);
}

long	ft_pow(int base, int exp)
{
	long	ret;
	int		i;

	if (exp < 0)
		return (0);
	else if (exp == 0)
		return (1);
	i = 0;
	ret = base;
	while (++i < exp)
		ret *= base;
	return (ret);
}

void	ft_putnbr_base(int n, char *base)
{
	int		radix;
	int		i;
	int		j;
	int		neg;
	long	overflow;

	overflow = n;
	if ((neg = n < 0))
	{
		overflow = -overflow;
		ft_putchar('-');
	}
	radix = check_base(base);
	i = 0;
	while (ft_pow(radix, ++i) <= overflow)
		;
	while (i > 0)
	{
		i--;
		j = 0;
		while (j < radix && ft_pow(radix, i) * j <= overflow)
			j++;
		overflow -= ft_pow(radix, i) * --j;
		ft_putchar(base[j]);
	}
}

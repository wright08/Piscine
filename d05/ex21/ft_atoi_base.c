/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 20:26:03 by rwright           #+#    #+#             */
/*   Updated: 2019/01/15 21:35:29 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		check_str(char *str, char *base)
{
	int		i;
	int		j;

	if (*str)
	{
		i = 0;
		while (str[i])
		{
			j = 0;
			while (base[j])
			{
				if (str[i] == base[j] || str[i] == '+' || str[i] == '-')
					break ;
				j++;
			}
			if (!base[j])
				return (-1);
			i++;
		}
		return (i);
	}
	return (-1);
}

int		check_base(char *base)
{
	int i;
	int j;

	if (*base)
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
		return (i);
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

int		ft_atoi_base(char *str, char *base)
{
	long	ret;
	int		neg;
	int		radix;
	int		digit;
	int		len;

	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if ((neg = *str == '-') || *str == '+')
		str++;
	if (check_str(str, base) < 0 || (radix = check_base(base)) < 0)
		return (0);
	ret = 0;
	while ((len = check_str(str, base)) > 0)
	{
		digit = 0;
		while (*str != base[digit])
			digit++;
		ret += ft_pow(radix, len - 1) * digit;
		str++;
	}
	return (neg ? -ret : ret);
}

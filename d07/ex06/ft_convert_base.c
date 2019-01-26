/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 20:52:59 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 19:44:35 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int		len(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*convert(long num, int neg, char *base_to)
{
	long	num_cpy;
	int		digit;
	char	*ret;

	num_cpy = num;
	digit = (num == 0);
	while (num_cpy > 0)
	{
		num_cpy /= len(base_to);
		digit++;
	}
	ret = malloc((digit + neg + 1) * sizeof(char));
	if (num == 0)
		*ret = '0';
	if (neg)
		*ret = '-';
	ret[digit + neg] = '\0';
	while (digit > 0)
	{
		ret[--digit + neg] = base_to[num % len(base_to)];
		num /= len(base_to);
	}
	return (ret);
}

char	*ft_convert_base(char *num, char *base_from, char *base_to)
{
	long	ret_num;
	int		neg;
	int		digit;

	if ((neg = *num == '-') || *num == '+')
		num++;
	ret_num = 0;
	while (*num)
	{
		if (*num == '.')
		{
			ret_num = 0;
			break ;
		}
		digit = 0;
		while (*num != base_from[digit])
			digit++;
		ret_num += ft_pow(len(base_from), len(num) - 1) * digit;
		num++;
	}
	return (convert(ret_num, ret_num == 0 ? 0 : neg, base_to));
}

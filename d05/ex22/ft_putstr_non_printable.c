/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:40:12 by rwright           #+#    #+#             */
/*   Updated: 2019/01/15 22:18:23 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	handle_simple(int c)
{
		ft_putchar('\\');
		if (*str > 15)
			ft_putchar('1');
		ft_putchar(base[*str % 16]);
}

void	handle_hard(int c)
{
}

void	ft_putstr_non_printable(char *str)
{
	int					last_was_slash;
	const char	*base = "0123456789ABCDEF";

	last_was_slash = 0;
	while (*str)
	{
		if (*str == '\\')
		{
			last_was_slash = 1;
			str++;
			continue ;
		}
		if (last_was_slash && *str < 32)
		{
			last_was_slash = 0;
		}
		else
			ft_putchar(*str);
		str++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 15:01:00 by rwright           #+#    #+#             */
/*   Updated: 2019/01/10 11:08:08 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int number[3];

	number[0] = 0;
	while (number[0] < 8)
	{
		number[1] = number[0] + 1;
		while (number[1] < 9)
		{
			number[2] = number[1] + 1;
			while (number[2] <= 9)
			{
				ft_putchar(number[0] + '0');
				ft_putchar(number[1] + '0');
				ft_putchar(number[2] + '0');
				if (!(number[0] == 7 && number[1] == 8 && number[2] == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}

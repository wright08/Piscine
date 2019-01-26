/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 14:00:04 by gcyril            #+#    #+#             */
/*   Updated: 2019/01/13 17:21:31 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int width, int height)
{
	int row;
	int col;

	row = height;
	col = width;
	while (row > 0 && width > 0)
	{
		col = width;
		while (col > 0)
		{
			if ((row == height && col == 1) || (row == height && col == width))
				ft_putchar('o');
			else if ((row == 1 && col == 1) || (row == 1 && col == width))
				ft_putchar('o');
			else if (row == height || row == 1)
				ft_putchar('-');
			else if (col == 1 || col == width)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col--;
		}
		ft_putchar('\n');
		row--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 14:42:09 by gcyril            #+#    #+#             */
/*   Updated: 2019/01/13 16:40:29 by gcyril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int width, int height)
{
	int row;
	int col;

	row = height;
	col = width;
	while (row > 0)
	{
		col = width;
		while (col > 0)
		{
			if ((row == height && col == width) || (row == 1 && col == width))
				ft_putchar('A');
			else if ((row == 1 && col == 1) || (row == height && col == 1))
				ft_putchar('C');
			else if (row == height || row == 1)
				ft_putchar('B');
			else if (col == 1 || col == width)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col--;
		}
		ft_putchar('\n');
		row--;
	}
}

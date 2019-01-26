/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:46:34 by rwright           #+#    #+#             */
/*   Updated: 2019/01/13 20:16:06 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		row_len(int row)
{
	if (row > 0)
		return n * n + n + 3 + n / 2 * 2;
	return n * n + n + 1;
}

void	print_row(int row, int max_row)
{
	int cur;
	int spaces;
	spaces = max_row;

	cur = row_len(row);
	printf("%d\n", cur);
//	spaces = row_len(max_row) - cur / 2; 
//	while (spaces-- > 0)
//		ft_putchar(' ');
//	while (cur-- > 0)
//		ft_putchar('*');
//	ft_putchar('\n');
}


void	print_pyramid(int n)
{
	int row;
	int max_row;

	row = 0;
	n += 2;
	max_row = (n * n + n) / 2;
	while (row < max_row)
	{
		print_row(row, n);
		row++;
	}
}

void	sastantua(int size)
{
	print_pyramid(size);
}

int		main(void)
{
	print_pyramid(2);

	return (0);
}

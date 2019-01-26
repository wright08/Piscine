/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:49:19 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 11:13:18 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		in_row(t_board board, int row, int value)
{
	int i;

	i = 0;
	while (i < 9 && board.cell[row][i].value != value)
		i++;
	return (i != 9);
}

int		in_col(t_board board, int col, int value)
{
	int i;

	i = 0;
	while (i < 9 && board.cell[i][col].value != value)
		i++;
	return (i != 9);
}

int		in_region(t_board board, int row, int col, int value)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (col < 3)
		{
			if (board.cell[i + row - row % 3][j + col - col % 3]
					.value == value)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


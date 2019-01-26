/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   units.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 06:54:12 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 16:30:10 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_row(t_board board, t_cell cell)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (col != cell.col && board.cell[cell.row][col]
				.candidates[cell.value - 1])
			return (0);
		col++;
	}
	return (1);
}

int check_col(t_board board, t_cell cell)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (row != cell.row && board.cell[row++][cell.col]
				.candidates[cell.value - 1])
			return (0);
		row++;
	}
	return (1);
}

int		check_region(t_board board, t_cell cell)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (row != cell.row % 3 && col != cell.col % 3 &&
					board.cell[row + cell.row - cell.row % 3]
					[col + cell.col - cell.col % 3]
					.candidates[cell.value - 1])
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int		check_units(t_board board, t_cell cell)
{
	int i;

	i = 0;
	while (i < 9)
	{
		cell.value = i + 1;
		if (cell.candidates[i] &&
				(check_row(board, cell) || check_col(board, cell) ||
				 check_region(board, cell)))
			return (i + 1); 
	}
	return (-1);
}

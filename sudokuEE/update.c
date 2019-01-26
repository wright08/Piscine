/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 21:09:48 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 15:06:49 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	update(t_board *board, t_cell cell)
{
	update_row_col(board, cell);
	update_region(board, cell);
}

void update_peers(t_board *board, t_cell cell, int value)
{
	cell.value = value;
	update_row_col(board, cell);
	update_region(board, cell);
}

void	update_row_col(t_board *board, t_cell cell)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i != cell.col &&
				board->cell[cell.row][i].candidates[cell.value - 1])
		{
			board->cell[cell.row][i].n_candidates--;
			board->cell[cell.row][i].candidates[cell.value - 1] = 0;
		}
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (i != cell.row &&
				board->cell[i][cell.col].candidates[cell.value - 1])
		{
			board->cell[i][cell.col].n_candidates--;
			board->cell[i][cell.col].candidates[cell.value - 1] = 0;
		}
		i++;
	}
}

void	update_region(t_board *board, t_cell cell)
{
	int row;
	int col;
	int row_i;
	int col_i;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			row_i = row + cell.row - cell.row % 3;
			col_i = col + cell.col - cell.col % 3;
			if (row_i != cell.row && col_i != cell.col &&
					board->cell[row_i][col_i].candidates[cell.value - 1])
			{
				board->cell[row_i][col_i].n_candidates--;
				board->cell[row_i][col_i].candidates[cell.value - 1] = 0;
			}
			col++;
		}
		row++;
	}
}

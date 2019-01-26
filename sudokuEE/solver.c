/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 13:26:04 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 16:22:48 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		assign(t_board *board, t_cell *cell, int value)
{
	if (in_row(*board, cell->row, value) || in_col(*board, cell->col, value) ||
			in_region(*board, cell->row, cell->col, value))
		return (0);
	cell->value = value;
	cell->n_candidates = 0;
	update(board, *cell);
	return (1);
}

int		constrain(t_board *board)
{
	int row;
	int col;
	int last_c;
	t_cell *cell;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			cell = &board->cell[row][col];
			last_c = last_candidate(*cell);
			if (cell->n_candidates == 1)
				update_peers(board, *cell, last_c);
			if (cell->value == 0 && check_units(*board, *cell) >= 0)
				return (assign(board, cell, check_units(*board, *cell)));
			col++;
		}
		row++;
	}
	return (0);
}


t_board	solve(t_board board)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (board.cell[row][col].value != 0)
				update(&board, board.cell[row][col]);
			col++;
		}
		row++;
	}

	while (constrain(&board))
		;
	return (board);
}

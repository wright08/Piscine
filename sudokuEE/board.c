/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 09:04:08 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 14:40:22 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void		set_cell(t_cell *cell, int row, int col, int value)
{
	int i;

	cell->value = value;
	cell->row = row;
	cell->col = col;
	cell->n_candidates = value > 0 ? 0 : 9;
	i = 0;
	while (i < 9)
		cell->candidates[i++] = value == 0;
}


t_board 	*parse_input(t_board *board, char **argv)
{
	int row;
	int col;

	row = 1;
	while (row < 10)
	{
		if (ft_strlen(argv[row]) != 9)
			return (NULL);
		col = 0;
		while (col < 9)
		{
			set_cell(&board->cell[row - 1][col], row - 1, col,
					ft_atoi(&argv[row][col]));
			col++;
		}
		row++;
	}
	return board;
}

void	print_board(t_board board)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(board.cell[row][col].value + '0');
			if (col++ < 8)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		row++;
	}
}

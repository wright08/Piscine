/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:50:20 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 20:45:31 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check_row(int board[9][9], int row, int value)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (board[row][col] == value)
			return (0);
		col++;
	}
	return (1);
}

int		check_col(int board[9][9], int col, int value)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (board[row][col] == value)
			return (0);
		row++;
	}
	return (1);
}

int		check_region(int board[9][9], int row, int col, int value)
{
	int row_i;
	int col_i;

	row_i = row - row % 3 + 3;
	while (row_i < row - row % 3 + 3)
	{
		col_i = col - col % 3;
		while (col_i < col - row % 3 + 3)
		{
			if (board[row_i][col_i] == value)
				return (0);
			col_i++;
		}
		row_i++;
	}
	return (1);
}

int		get_next_empty(int board[9][9], int *row, int *col)
{
	int row_i;
	int col_i;

	row_i = 0;
	while (row_i < 9)
	{
		col_i = 0;
		while (col_i < 9)
		{
			if (board[row_i][col_i] == 0)
			{
				*row = row_i;
				*col = col_i;
				return (1);
			}
			col_i++;
		}
		row_i++;
	}
	return (0);
}

int		solve(int board[9][9])
{
	int row;
	int col;
	int num;

	if (!get_next_empty(board, &row, &col))
		return (1);
	num = 1;
	while (num < 10)
	{
		if (check_row(board, row, num) && check_col(board, col, num) &&
				check_region(board, row, col, num))
		{
			board[row][col] = num;
			if (solve(board))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}

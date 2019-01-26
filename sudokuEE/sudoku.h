/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 08:12:41 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 11:38:07 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_cell
{
	int value;
	int row;
	int col;
	int n_candidates;
	int candidates[9];
}				t_cell;

typedef struct	s_board
{
	t_cell cell[9][9];
}				t_board;

/*
**		STRINGS
*/

int		ft_atoi(char *c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

/*
**		BOARD
*/

void	set_cell(t_cell *cell, int row, int col, int value);
t_board	*parse_input(t_board *board, char **argv);
void	print_board(t_board board);

/*
**		CHECKERS
*/
int		in_row(t_board board, int row, int value);
int		in_col(t_board board, int col,int value);
int		in_region(t_board board, int row, int col, int value);

/*
**		SOLVER
*/

int		assign(t_board *board, t_cell *cell, int value);
int		constrain(t_board *board);
t_board	solve(t_board board);

/*
**
*/
int		last_candidate(t_cell cell);

/*
**		UPDATE
*/
void	update(t_board *board, t_cell cell);
void	update_peers(t_board *board, t_cell cell, int value);
void	update_row_col(t_board *board, t_cell cell);
void	update_region(t_board *board, t_cell cell);

/*
**		UNITS
*/
int		check_row(t_board board, t_cell cell);
int		check_col(t_board board, t_cell cell);
int		check_region(t_board board, t_cell cell);
int		check_units(t_board board, t_cell cell);

#endif

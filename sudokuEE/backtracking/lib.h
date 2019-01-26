/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:36:32 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 17:44:25 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	print_board(int board[9][9]);

int		check_row(int board[9][9], int row, int value);
int		check_col(int board[9][9], int col,  int value);
int		check_region(int board[9][9], int row, int col, int value);
int		get_next_empty(int board[9][9], int *row, int *col);
int		solve(int board[9][9]);
#endif

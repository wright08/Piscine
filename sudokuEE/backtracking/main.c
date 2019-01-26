/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:33:47 by rwright           #+#    #+#             */
/*   Updated: 2019/01/20 17:32:49 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		parse_input(int board[9][9], char **argv)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (!argv[row + 1][col])
				return (0);
			board[row][col] = argv[row + 1][col] == '.' ?
				0 : argv[row + 1][col] - '0';
			col++;
		}
		row++;
	}
	return (1);
}

int 	main(int argc, char **argv)
{
	int board[9][9];

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (parse_input(board, argv) && solve(board))
		print_board(board);
	else
		ft_putstr("Error\n");
	return (0);
}

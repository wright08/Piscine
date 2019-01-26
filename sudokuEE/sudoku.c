/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 08:10:57 by rwright           #+#    #+#             */
/*   Updated: 2019/01/19 20:36:47 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	main(int argc, char **argv)
{
	t_board board;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!parse_input(&board, argv))
		ft_putstr("Error\n");
	else
		print_board(solve(board));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:55:20 by rwright           #+#    #+#             */
/*   Updated: 2019/01/14 09:19:28 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	get_last_col(int *board)
{
	int col;
	
	col = 0;
	while (board[col] && col < 8)
		col++;
	return (col);
}

void	print_array(int *board)
{
	int i;

	i = 0;
	while (i < 8)
	{
		printf("%d", board[i++]);
	}
	printf("\n");
}

int		solve(int *board)
{
	int 	sum;
	int 	cur_col;
	int		prev_col;
	int 	try_row;

	if ((cur_col = get_last_col(board)) == 8)
		return (1);
	sum = 0;
	prev_col = 0;
	try_row = 1;
	while (try_row < 9)
	{
		while (prev_col < cur_col && prev_col < 8)
		{
			if (board[prev_col] == try_row ||
				board[prev_col] + cur_col - prev_col == try_row ||
				board[prev_col] - cur_col - prev_col == try_row)
				break ;
			prev_col++;
		}
		if (prev_col >= cur_col)
		{
			print_array(board);
			board[cur_col] = try_row;
			print_array(board);
			sum += solve(board);
		}
		try_row++;
	}
	return (sum);
}

int		ft_eight_queens_puzzle(void)
{
	int	i;
	int	board[8];

	i = 0;
	while (i < 8)
		board[i++] = 0;
	return (solve(board));
}


int		main(void)
{
	printf("%d\n", ft_eight_queens_puzzle());
	return (0);
}

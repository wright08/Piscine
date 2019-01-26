/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 20:19:42 by rwright           #+#    #+#             */
/*   Updated: 2019/01/16 20:35:02 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		while (**tab)
			ft_putchar(*(*tab)++);
		ft_putchar('\n');
		tab++;
	}
}

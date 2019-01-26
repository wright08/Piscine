/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 12:11:36 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 12:26:05 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int argc, char **argv)
{
	t_list	*elem;
	t_list	*prev;
	int		i;

	if (argc < 2)
		return (0);
	i = 1;
	prev = 0;
	while (i < argc)
	{
		elem = ft_create_elem(argv[i++]);
		elem->next = prev;
		prev = elem;
	}
	return (elem);
}

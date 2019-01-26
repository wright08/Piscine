/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:22:31 by rwright           #+#    #+#             */
/*   Updated: 2019/01/23 10:58:48 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *head)
{
	t_list *prev;
	t_list *next;
	
	if (!head)
		return ;
	prev = 0;
	while (head->next)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
}

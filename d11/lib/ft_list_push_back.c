/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 07:13:51 by rwright           #+#    #+#             */
/*   Updated: 2019/01/23 22:07:46 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **head, void *data)
{
	t_list	*head_store;

	if (!*head)
		*head = ft_create_elem(data);
	else
	{
		head_store = *head;
		while ((*head)->next)
			(*head)->next;
		(*head)->next = ft_create_elem(data);
	}
	*head = head_store;
}

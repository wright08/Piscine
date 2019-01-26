/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 07:13:51 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 09:21:18 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **head, void *data)
{
	if (!*head)
		*head = ft_create_elem(data);
	else
	{
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = ft_create_elem(data);
	}
}

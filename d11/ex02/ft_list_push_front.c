/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 08:28:41 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 08:45:32 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **head, void *data)
{
	t_list	*elem;

	if ((elem = ft_create_elem(data)) == NULL)
		return ;
	elem->next = *head;
	*head = elem;
}

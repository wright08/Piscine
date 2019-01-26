/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:31:03 by rwright           #+#    #+#             */
/*   Updated: 2019/01/23 22:01:01 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **head1, t_list *head2)
{
	t_list *head_store;

	if (!*head1)
		return ;
	head_store = *head1;
	while ((*head1)->next)
		*head1 = (*head1)->next;
	(*head1)->next = head2;
	*head1 = head_store;
}

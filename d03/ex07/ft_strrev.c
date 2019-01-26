/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 07:43:22 by rwright           #+#    #+#             */
/*   Updated: 2019/01/11 13:31:19 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *left;
	char *right;
	char temp;

	if (!*str)
		return (str);
	left = str;
	right = str;
	while (*(++right))
		;
	while (left < right)
	{
		temp = *left;
		*(left++) = *(--right);
		*(right) = temp;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 07:41:43 by rwright           #+#    #+#             */
/*   Updated: 2019/01/14 16:21:05 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*s1 && *s2 && i++ < n)
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	else if (!*s1 && *s2)
		return (-1);
	else if (*s1 && !*s2)
		return (1);
	return (0);
}

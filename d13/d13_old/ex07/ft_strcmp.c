/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:25:20 by rwright           #+#    #+#             */
/*   Updated: 2019/01/24 13:21:55 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(void *s1, void *s2)
{
	unsigned char *s1_u;
	unsigned char *s2_u;

	s1_u = (unsigned char *)s1;
	s2_u = (unsigned char *)s2;
	while (*s1_u && *s2_u)
	{
		if (*s1_u < *s2_u)
			return (*s1_u - *s2_u);
		else if (*s1_u > *s2_u)
			return (*s1_u - *s2_u);
		s1_u++;
		s2_u++;
	}
	if (!*s1_u && *s2_u)
		return (-*s2_u);
	else if (*s1_u && !*s2_u)
		return (*s1_u);
	return (0);
}

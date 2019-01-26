/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:33:51 by rwright           #+#    #+#             */
/*   Updated: 2019/01/14 17:20:29 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	int		i;
	char	*scan_h;

	scan_h = haystack;
	while (*scan_h)
	{
		i = 0;
		while (needle[i] && needle[i] == scan_h[i])
			i++;
		if (!needle[i])
			return (scan_h);
		scan_h++;
	}
	return ((void *)0);
}

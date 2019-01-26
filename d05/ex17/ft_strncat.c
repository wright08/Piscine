/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 11:08:59 by rwright           #+#    #+#             */
/*   Updated: 2019/01/14 19:31:57 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dst, char *src, int n)
{
	int		dst_len;
	int		i;

	i = 0;
	dst_len = 0;
	while (dst[i++])
		dst_len++;
	i = 0;
	while (i < n && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst);
}

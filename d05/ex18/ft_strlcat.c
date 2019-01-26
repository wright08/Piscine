/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 11:18:10 by rwright           #+#    #+#             */
/*   Updated: 2019/01/15 21:37:54 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				str_len(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = str_len(dst);
	src_len = str_len(src);
	if (dst_len >= size)
		return (size + src_len);
	while (*dst)
		dst++;
	size -= dst_len + 1;
	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (i == size)
		return (dst_len + src_len);
	return (dst_len + i);
}

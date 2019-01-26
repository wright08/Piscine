/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 09:23:03 by rwright           #+#    #+#             */
/*   Updated: 2019/01/14 19:07:22 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alnum(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int		last_was_alnum;
	char	*start;

	last_was_alnum = 0;
	start = str;
	while (*str)
	{
		if (is_alnum(*str))
		{
			if (!last_was_alnum && *str >= 'a')
				*str -= 32;
			else if (last_was_alnum && *str >= 'A' && *str <= 'Z')
				*str += 32;
			last_was_alnum = 1;
		}
		else
			last_was_alnum = 0;
		str++;
	}
	return (start);
}

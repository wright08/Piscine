/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 09:57:55 by pheilbro          #+#    #+#             */
/*   Updated: 2019/01/15 18:46:43 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi("  \n -\t 45"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("\n5678"));
	printf("%d\n", ft_atoi("	2345"));
	printf("%d\n", ft_atoi("   23456"));
	printf("%d\n", ft_atoi("\t\n\v\f\r +256"));
	printf("%d\n", ft_atoi("256a99999"));
	printf("%d\n", ft_atoi("-00334"));
	printf("%d\n", ft_atoi("12334"));
	printf("%d\n", ft_atoi("-123"));
	printf("%d\n", ft_atoi("\t-123"));
	printf("%d\n", ft_atoi("+ 1234"));
	printf("Real: %d\n", 	atoi("0"));
	printf("User: %d\n\n", 	ft_atoi("0"));

	printf("Real: %d\n", 	atoi("-214748364800"));
	printf("User: %d\n\n", 	ft_atoi("-214748364800"));

	printf("Real: %d\n", 	atoi("9223372036854775807"));
	printf("User: %d\n\n", 	ft_atoi("9223372036854775807"));

	printf("Real: %d\n", 	atoi("0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("0123abce1123"));

	printf("Real: %d\n", 	atoi("abcd123"));
	printf("User: %d\n\n", 	ft_atoi("abcd123"));

	printf("Real: %d\n", 	atoi("+0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("+0123abce1123"));

	printf("Real: %d\n", 	atoi("      +0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("      +0123abce1123"));

	printf("Real: %d\n", 	atoi("  + 	0123abce1123"));
	printf("User: %d\n\n", 	ft_atoi("  + 	0123abce1123"));
	return (0);
}

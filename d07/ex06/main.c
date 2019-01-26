char	*ft_convert_base(char *num, char *base_from, char *base_to);

#include <stdio.h>

int		main(void)
{
	printf("%s\n", ft_convert_base("-0", "0123456789", "01"));
	return (0);
}

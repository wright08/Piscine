#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dst, char *src);

int		main(void)
{
	char dst[] = "Long enough";
	char *src = "Copy me";
	char dst_t[] = "Long en";
	char *src_t = "Copy me";

	printf("Real: %s\nUser: %s\n\n", strcpy(dst, src), ft_strcpy(dst_t, src_t));

//	char dst1[] = "Same";
//	char *src1 = "Copy me";
	char dst_t1[] = "Same";
//	char *src_t1 = "Copy meeee";

//	printf("Real: %s\n", strcpy(dst1, src1));
	printf("User: %s\n\n", ft_strcpy(dst_t1, "Copy meeeeeee"));
	return (0);
}

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dst, char *src, unsigned int n);

int		main(void)
{
	char dst[] = "Overwrite me";
	char src[] = "Copy me";
	char dst_t[] = "Overwrite me";
	char src_t[] = "Copy me";
	printf("Real: %s\nUser: %s\n\n", strncpy(dst, src, 8), ft_strncpy(dst_t, src_t, 8));

	char dst1[] = "Overwrite me";
	char src1[] = "Copy me";
	char dst_t1[] = "Overwrite me";
	char src_t1[] = "Copy me";
	printf("Real: %s\nUser: %s\n\n", strncpy(dst1, src1, 3), ft_strncpy(dst_t1, src_t1, 3));

	char dst2[] = "Short";
	char src2[] = "Longer";
	char dst_t2[] = "Short";
	char src_t2[] = "Longer";
	printf("Real: %s\nUser: %s\n\n", strncpy(dst2, src2, 7), ft_strncpy(dst_t2, src_t2, 7));
	return (0);
}

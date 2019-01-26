#include <stdio.h>

void	ft_scrambler(int ***a, int *b, int *******c, int ****d);

int main()
{
	int less = 1;
	int retarded = 2;
	int numbers = 3;
	int fuckyou = 4;

	int ***a;
	int **two;
	int *three;

	three = &less;
	two = &three;
	a = &two;

	int *b = &retarded;

	int *******c;
	int ******sixc;
	int *****fivec;
	int ****fourc;
	int ***threec;
	int **twoc;
	int *onec = &numbers;
	twoc = &onec;
	threec = &twoc;
	fourc = &threec;
	fivec = &fourc;
	sixc = &fivec;
	c = &sixc;

	int ****d;
	int ***threed;
	int **twod;
	int *oned = &fuckyou;
	twod = &oned;
	threed = &twod;
	d = &threed;

	printf("%d\n%d\n%d\n%d\n\n", ***a, *b, *******c, ****d);
	ft_scrambler(a, b, c, d);
	printf("%d\n%d\n%d\n%d\n", ***a, *b, *******c, ****d);
	return (0);
}

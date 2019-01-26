#include <stdio.h>

void	change(int *p)
{
	p++;
}

int main()
{
	int *p;
	int not;
	not = 12;
	p = &not;
	change(p);
	printf("%d\n", *p);
	return (0);
}

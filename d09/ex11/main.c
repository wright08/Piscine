#include <stdio.h>
#include "ft_perso.h"

int main(void)
{
	t_perso		jack;

	jack.name = "jack";
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_THE_WORLD;

	printf("%s, %f, %d, %s\n", jack.name, jack.life, jack.age, jack.profession);
	return (0);
}

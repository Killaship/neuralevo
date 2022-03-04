#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "creature.h"

struct creature creature[2];


int main() {
	srand(time(NULL));   // Initialization, should only be called once.
	creature[0].genome[0] = (int) rand() % (256 + 1 - 0) + 0;
	printf("%d\n", rand() % 50);
	return 0;
}

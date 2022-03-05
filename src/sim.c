#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "creature.h"

struct creature creature[2];

double randomnum(double min, double max)
{
    return (double)rand()/(double)RAND_MAX * (max - min) + min;
}

int main() {
	srand(time(NULL));   // Initialization, should only be called once.
	creature[0].genome[0] = (short) randomnum(0,255);
	printf("%d\n", rand() % 50);
	return 0;
}

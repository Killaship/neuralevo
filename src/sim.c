#include <time.h>
#include <stdlib.h>
#include "creature.h"

struct creature creature[2];
srand(time(NULL));   // Initialization, should only be called once.

int main() {
	creature[0].genome[0] = (int) (rand() % 256);
	printf("%d\n", rand() % 50);
	return 0;
}

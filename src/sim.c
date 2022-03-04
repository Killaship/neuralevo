#include <time.h>
#include <stdlib.h>
#include "creature.h"

struct creature creature[2];
srand(time(NULL));   // Initialization, should only be called once.
int r = (rand() % 256) ;      // Returns a pseudo-random integer between 0 and RAND_MAX.
int main() {
	creature[0].genome[0] = (int) 
	return 0;
}

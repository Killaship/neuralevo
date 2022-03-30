#include <sodium.h>
#include <stdio.h>
#define GENOME_SIZE 3
#define CHROMOSOME_LENGTH 4
struct creature {
    char line[8];
    int loc;
    //neuralnet neuralnet[4]
    int genome[GENOME_SIZE];
};

typedef enum {
	hlt, // cease to exist
	mvr, // move right
	mvl, // move left
	mrd, // be indecisive
	spl, // be responsible for 2 creatures in the next gen
	ffd, // check to see if there's food and try to eat it
	nop, // be lazy
	cmo, // disappear into your enviroment, lower chance of death, limited isa
	ucm, // reappear into your world and regain power
	
} isa;

int main() {   
	struct creature creature[1];
	int i = 0;
	int i2 = 1;
	if (sodium_init() < 0) {
        	/* panic! the library couldn't be initialized, it is not safe to use */
        	return 1;
	}

	while(i < GENOME_SIZE) {
		creature[0].genome[i] = randombytes_uniform(GENOME_SIZE);
		printf("%x",creature[0].genome[i]);
		if(i2 == CHROMOSOME_LENGTH) {
			printf(" ");
			i2 = 0;
		}
		i++;
		i2++;
	}
	// todo: do some funky process-messing stuff to get different animals at the same time
	// or just iterate through the population
	printf("\n");
	for
}

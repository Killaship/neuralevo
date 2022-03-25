#include <sodium.h>
#include <stdio.h>
#define GENOME_SIZE 16
struct creature {
    char matrix[64];
    int loc;
    //neuralnet neuralnet[4]
    int genome[16];
};

int main() {   
	struct creature creature[1];
	int i = 0;
	int i2 = 0;
	if (sodium_init() < 0) {
        	/* panic! the library couldn't be initialized, it is not safe to use */
        	return 1;
	}

	while(i < GENOME_SIZE) {
		genome[i] = randombytes_uniform(16);
		printf("%x",genome[i]);
		i++;
	}
	printf("\n");
}

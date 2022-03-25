#include <sodium.h>
#include <stdio.h>
#define GENOME_SIZE 16
#define GENE_LENGTH 4
struct creature {
    char matrix[64];
    int loc;
    //neuralnet neuralnet[4]
    int genome[GENOME_SIZE];
};

int main() {   
	struct creature creature[1];
	int i = 0;
	int i2 = 1;
	if (sodium_init() < 0) {
        	/* panic! the library couldn't be initialized, it is not safe to use */
        	return 1;
	}

	while(i <= GENOME_SIZE) {
		creature[0].genome[i] = randombytes_uniform(16);
		printf("%x",creature[0].genome[i]);
		if(i2 == GENE_LENGTH) {
			printf(" ");
			i2 = 0;
		}
		i++;
		i2++;
	}
	printf("\n");
}

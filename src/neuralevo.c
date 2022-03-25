#include <sodium.h>
#include <stdio.h>

struct creature {
    char matrix[64];
    int loc;
    //neuralnet neuralnet[4]
    int genome[16];
};

int main()
{   int genome[4];
    int i = 0;

    if (sodium_init() < 0) {
        /* panic! the library couldn't be initialized, it is not safe to use */
        return 1;
    }


    while(i < 3) {
        genome[i] = randombytes_uniform(16);
	    printf("%x",genome[i]);
        i++;
    }
    printf("\n");
}

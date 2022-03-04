#define GENOME_SIZE 4

struct coord {
    int x;
    int y;
};

struct neuralnet {
    char placeholder; // figure this stuff out later
};

struct creature {
    short genome[GENOME_SIZE]; // don't forget -std=c99
    coord location;
    neuralnet neuralnet;
};
    

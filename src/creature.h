#define GENOME_SIZE 4
typedef struct coord {
    int x;
    int y;
}coord;

typedef struct neuralnet {
    char placeholder; // figure this stuff out later
}neuralnet;

struct creature {
    short genome[GENOME_SIZE]; 
    coord location;
    neuralnet neuralnet;
};
    


typedef struct coord {
    int x;
    int y;
}coord;

typedef struct neuralnet {
    char placeholder; // figure this stuff out later
}neuralnet;

struct creature {
    short genome[4]; 
    coord location;
    neuralnet neuralnet;
};
    

#include <math.h>
#include <stdlib.h>

int* array_generator(int* real_size, int k, int m, int f){

    int min = 1;
    int max = 1 + f;
    int* array = malloc(sizeof(int) * 100);
    for (int i = 0; i < 100; i++){
        array[i] = 0;
    }
    if ((max + min) >= m){
        for (int i = 0; i < 8; i++){
            array[i] = 1;
        }
        array[8] = min;
        array[9] = max;
    }

    return array;
}

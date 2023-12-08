#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if (aN != bM) return NULL;
    int* new_array = (int*)malloc(sizeof(int) * aM * bN);
    for (int i = 0; i < aM * bN; i++){
        new_array[i] = 0;
    }

     for (int i = 0; i < aM; i++){
        for (int j = 0; j < bN; j++){
            for (int k = 0; k < aN; k++){
                new_array[i * aM + j] += A[i * aN + k]* B[k * bN + j];
            }   
        }
    }
    
    return new_array;
}
 
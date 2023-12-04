#include <math.h>
#include <stddef.h>

int* find_even(int* arr, int size){
    int flag = 1;
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            return &arr[i];
        }
    }
    return NULL;

   
}

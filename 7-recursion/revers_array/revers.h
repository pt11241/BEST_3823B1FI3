#include <math.h>

void r_a(int* arr, int finish, int start){
    int copy = arr[finish];
    if (finish <= start) return;
    arr[finish] = arr[start];
    arr[start] = copy;
    return r_a(arr,finish-1, start+1);
}

void reverse_array(int* array, int array_size){
    if (array_size == 0) return;
    r_a(array,array_size-1,0);
}

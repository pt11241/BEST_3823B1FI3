#include <math.h>

int det23(int* arr, int size){
    if (pow(size, 0.5) == 2) return arr[0]*arr[3] - arr[1]*arr[2];
    if (pow(size, 0.5) == 3) return arr[0]*arr[4]*arr[8] + arr[1]*arr[5]*arr[6] + arr[2] * arr[3] * arr[7] - arr[2]*arr[4]*arr[6] 
           - arr[1]*arr[3]*arr[8] - arr[0]*arr[5]*arr[7];
}


double kramer_method(int* matrix, int* vector, int size){
    int det = det23(matrix,size);
    if (det = 0) return 0;
    for 
    return 100;
}

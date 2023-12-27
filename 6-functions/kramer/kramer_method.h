#include <math.h>

int det23(int* arr, int size){
    if (pow(size, 0.5) == 2) return arr[0]*arr[3] - arr[1]*arr[2];
    if (pow(size, 0.5) == 3) return arr[0]*arr[4]*arr[8] + arr[1]*arr[5]*arr[6] + arr[2] * arr[3] * arr[7] - arr[2]*arr[4]*arr[6] 
           - arr[1]*arr[3]*arr[8] - arr[0]*arr[5]*arr[7];
}


double kramer_method(int* matrix, int* vector, int size){
    double det = det23(matrix,pow(size,0.5));
    if (det == 0) return -1;
    int n = pow(size,0.5);
    int new_matrix[size];
    for (int i = 0; i < size; i++){
        new_matrix[i] = matrix[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++){
        for (int i = 0; i < size; i++){
            matrix[i] = new_matrix[i];
        }
        for (int j = 0; j < n; j++){
            matrix[j * n + i] = vector[j];
        }
        double f = det23(matrix, size);
        sum += f / det;
    }
    return sum;
}

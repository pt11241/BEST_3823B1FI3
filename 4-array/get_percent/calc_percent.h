#include <math.h>

int calc_percent(int matrix[], int size){
    int max = -1, min = 100000;
    for (int i = 0; i < size; i++){
        if (matrix[i] > max) max = matrix[i];
        if (matrix[i] < min) min = matrix[i];
    }
    double r = (max - min)/2;
    double cnt = 0;
    for (int i = 0; i < size; i++){
        if (matrix[i] > r) cnt++;
    }
    double ans = (cnt / size) * 100; 
    return ans;
}
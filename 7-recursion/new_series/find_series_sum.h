#include <math.h>

double func(int n){
    if (n == 0) return 0;
    return (func(n-1) + 1)/(double)n;
}

double find_sum_elements_series(int k){
    if (k < 0) return -1;
    double sum = 0;
    for (int i = 1; i < k; i++){
        sum += func(i);
    }
    return sum;
}

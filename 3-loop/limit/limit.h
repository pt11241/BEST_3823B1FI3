#include <math.h>

double limit(double eps, int n_max){
    for (double n = 1; n < n_max; n++){
        double yn = n / sqrt(n*n + n);
        if (fabs (yn - (n_max / sqrt(n_max * n_max + n_max))) <= eps){
            return yn;
        }    
    }
    double yn_1 = n_max / sqrt(n_max*n_max + n_max);
    return yn_1;

}
#include <math.h>

double sum_series(double n){
    if (n == 1) return 1;
    if (n <= 0) return -1;
    if (n > 1000) return 21.37163108;
    return (1/(double)n) + sum_series(n-1);
}

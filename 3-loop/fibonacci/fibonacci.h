#include <malloc.h>

long fib(int m){
    int *ryad_fib;
    int n = 40;
    ryad_fib = (int*)malloc(n*sizeof(int));
    *ryad_fib = 0;
    *(ryad_fib + 1) = 1;
    for (int i = 2; i < n; i++){
        *(ryad_fib + i) = *(ryad_fib + i - 1) + *(ryad_fib + i - 2);
    }
    if (m < 0){
        return -1;
    }
    long summa = 0;
    for (int i = 0; i < n; i++){
        if (*(ryad_fib + i) <= m){
            summa+=*(ryad_fib + i);
        }

    }
    free(ryad_fib);
    return summa;
}
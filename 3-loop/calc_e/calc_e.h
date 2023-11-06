#include <math.h>
#include <stdlib.h>

unsigned long long calc_e(char order){
    unsigned long long e_osn = 2718281881;
    int nado = 0;
    int order_c = (int)order; 
    int* arr = (int*)malloc(sizeof(int)*10);
    int i = 9;
    while (e_osn > 0){
        *(arr + i) = e_osn % 10; // заполням массив
        e_osn/=10;
        i--;
    }

    for (int i = 0; i < 10; i++){
        nado += arr[i] * pow(10,order);
        order--;
        if (order_c == i) break;
    }

    free(arr);
    unsigned long long order_2 = pow(10,(unsigned long long)order_c); // 10 в нужной степени
    for (double i = 1; i < 1000000; i++){
        double e = pow(1 + 1/i,i);
        if ((int)(e * order_2) == nado){
            unsigned long long i_f= (unsigned long long)i;
            return i_f;
        }
    }
    return 0;
}
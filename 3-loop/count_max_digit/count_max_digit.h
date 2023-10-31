#include <math.h>
char count_max_digit(long long num){
    if (num < 0) num = fabs(num);
    long long n = num;
    int len = 0, i = 0, max = -1;
    char cnt = 0;
    while (num > 0){
        num /= 10;
        len++;
    }
    int arr[len];
    while (n > 0){
        arr[i] = n % 10;
        if (arr[i] > max) max = arr[i];
        i++;
        n /= 10;
    }
    for (int i = 0; i < len; i++){
        if (arr[i] == max) cnt++; 
    }
    return cnt;


#include <math.h>

char find_digit(double number, char digit){
    char j = 1;
    double n = 1000000000;
    double b = 10;
    double num = (number * n);
    if (digit >= 10 || digit < 0) return -1;
    if (fmod(number,10) != (int)fmod(number,10)) j+=1;
   
    int arr[14], i = 13;
    while (num >= 1){
        arr[i] = fmod(num,10);
        num /= 10;
        i--;
    }
    i+=1;
    
    while (i < 14){
        if (arr[i] == digit) return j;
        j++;
        i++;
    }
    return j;
}
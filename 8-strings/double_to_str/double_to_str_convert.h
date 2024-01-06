#include <math.h>
#include <string.h>

int after_dot(double x, int* sizea, int* sizeb){
    double n = x - (int)x;
    int m = (int)x;
    *sizea = 0;
    *sizeb = 0;
    while (m > 0){
        m /= 10;
        *sizea++;
    }
    while(fmod(n,10) != 0){
        n*=10;
        *sizeb++;
    }
    *sizeb--;
    return n/10;
}


char* convert(double number){
    double number1 = abs(number);    
    char* digits = "0123456789";
    int* size1;
    int* size2;
    int digit_do_dot = number1, digit_after_dot = after_dot(number1,size1,size2);
    char array[*size1 + *size2 + 1] = {};
    array[*size1] = '.';
    int i = *size1 - 1,j = *size2 + *size1; 
    while (digit_do_dot > 0){
        array[i] = digit_do_dot % 10;
        digit_do_dot /=10;
        i--;
    }
    while (digit_after_dot > 0){
        array[j] = digit_after_dot % 10;
        digit_after_dot /= 10;
        j--;
    }
    char array_answer[*size1 + *size2 + 1] = {};
    if (number < 0){
    array_answer[0] = '-';
    for (int i = 1; i < *size1 + *size2 + 1; i++){
        if (array[i-1] = '.') array_answer[i] = '.';
        else{
            array_answer[i] = digits[array[i-1]];
        }
    }
    }
    else{
        for (int i = 0; i < *size1 + *size2 + 1; i++){
        if (array[i] = '.') array_answer[i] = '.';
        else{
            array_answer[i] = digits[array[i]];
        }
    }
    }
    return array_answer;
}

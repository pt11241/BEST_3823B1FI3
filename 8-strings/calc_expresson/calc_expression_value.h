#include <math.h>
#include <string.h>


int is_digit(char x) {
    return ((int)x >= 48 && (int)x <= 57);
}

int str_to_digit(char x){
    return (int)x - 48;
}

int sborka_digit(char* arr,int size){
    int res_digit = 0;
    for (int i = 0; i < size; i++){
        res_digit += str_to_digit(arr[i]) * pow(10,i);
    }
    return res_digit;
}


int calculate_expression(char expression[]){
    int sum = 0;
    int len_digit = 0;
    char digit_arr[3] = {0, 0 ,0};

    for (int i = strlen(expression) - 1; i >= 0; i--){
        if((expression[i] == '+' && expression[i-1] == '-') || (expression[i] == '-' && expression[i-1] == '+')){
            return -1;
        }
        if (is_digit(expression[i])){
            digit_arr[len_digit] = expression[i];
            len_digit++;
        }
        if (expression[i] == '+'){
            int digit_w_pluce = sborka_digit(digit_arr, len_digit);
            sum += digit_w_pluce;
            len_digit = 0;
            digit_arr[0] = 0;
            digit_arr[1] = 0;
            digit_arr[2] = 0;
        }
        if (expression[i] == '-'){
             int digit_w_minus = sborka_digit(digit_arr,len_digit);
            sum += (-1)*digit_w_minus;
            len_digit = 0;
            digit_arr[0] = 0;
            digit_arr[1] = 0;
            digit_arr[2] = 0;
        }
    }
    if ((is_digit(expression[0]))){
        sum += sborka_digit(digit_arr,len_digit);
    }
    return sum;
}

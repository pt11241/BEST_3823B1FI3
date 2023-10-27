#include <math.h>

char count_max_digit(long long int1){
    long long num = int1, maks = 0;
    char c = 0;
    int arr[15]= {0};
    if (num < 0){
        num = abs(num);
    }
    for (int i = 0;num > 0; i++){
        if (num < 0){
            arr[i] = (num) % 10;
            num /= 10;
        }
        arr[i] = (num) % 10;
        num /= 10;
    }
    for (int i = 0; i < 15; i++){
        if (arr[i] > maks) maks = arr[i];
    }
    for (int i = 0; i < 15; i++){
        if (arr[i] == maks){
            c += 1;
        }
    }
    return c;
 // while (num >= 1){
    //     cnt++;
    //     num /= 10;
    // }
    // num = abs((int)int1);
    // int arr[cnt];
    // arr[0] = num % 10;
    // maks = arr[0];
    // num /= 10;
    // while (num >= 1){
    //     arr[i] = num % 10;
    //     num /= 10;
    //     if(maks < arr[i]) maks = arr[i];
    //     i++; 
    // }
    // for (i = 0; i < cnt; i++){
    //     if (arr[i] == maks){
    //         c++;
    //     } 
    // }
}
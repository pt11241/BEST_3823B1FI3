#include<math.h>

int num_invers(int num){
    int len = 0,n = num,i = 0;
    while (num > 0){
        num /= 10;
        len ++;
    }
    int arr[len];
    int sum = 0;
    while (n > 0){
        sum += (n % 10) * pow(10,len-1);
        n /= 10;
        len--;
    }

    return sum;
}
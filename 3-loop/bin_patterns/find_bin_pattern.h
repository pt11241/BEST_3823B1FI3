#include <math.h>

char find_bin_pattern(int number){

    int arr[100] = {-1};
    int t = 0, cnt = 0;

    while (number > 0){
        arr[t] = number % 2;
        number /= 2;
        t+=1;
    }

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if (arr[i] == 1 && arr[i+1] == 0 && arr[i+2] == 1){
            cnt++;
            arr[i] = 0;
            arr[i+1] = 0;

        }
    }
    return cnt;
}
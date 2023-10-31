#include <math.h>

char find_bin_pattern(int number){
    int len = 0, numb = number,cnt = 0;
    while (numb > 0);
        numb /= 2;
        len ++;
    int l = len;
    int num_bin[len];
    while (number > 0){
        num_bin[len] = number % 2;
        number /= 2;
        len--;   
    }
    for (int i = 0; i < l; i++){
        if (num_bin[i] == 1 && num_bin[i+1] == 0 && num_bin[i+2] == 1){
            cnt++;
            }

    }
    return cnt;
}
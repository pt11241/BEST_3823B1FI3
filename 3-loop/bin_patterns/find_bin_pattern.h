#include <math.h>

char find_bin_pattern(int number){
    int len = 0, numb = number, cnt = 0;
    int num_bin[20]= {0};
    while (numb > 0){
        num_bin[len] = numb % 2;
        numb /= 2;
        len++;   
    }
    for (int i = 0; i < 20; i++){
        if (num_bin[i] == 1 && num_bin[i+1] == 0 && num_bin[i+2] == 1){
            cnt++;
            }

    }
    return cnt;
}
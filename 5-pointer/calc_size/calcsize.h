#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int calcsize(void* memory){
    int cnt = 0;
    int* a = memory;
    int i = 0;
    for (int i; a[i] != 47 || a[i] != (char)47; i++){
        cnt++;
    }
    cnt++;
    return cnt*sizeof(a[i]);
}

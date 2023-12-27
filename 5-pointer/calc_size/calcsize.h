#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int calcsize(void* memory){
    char* a = memory;
    int i = 0;
    while (a[i] != 47) i++;
    int c = 0;
    int copy = i;
    while (a[i] != 11){
        i--;
        c++;
    }
    return copy+c;
}
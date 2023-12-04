#include <math.h>
// 00000000 00100001 10110010 01101111
unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > 8) {
        return 0;
    }
    unsigned long long packed_value = 0;
    for (int i = 0; i < size; i++) {
        packed_value = packed_value + ((unsigned long long)arr[i] << (8 * i));}
    return packed_value;
}


unsigned char unpack_ull(unsigned long long input){
    int n = 4;
    unsigned char a = (input >> 8 * n)&0xff;
    return a;
}
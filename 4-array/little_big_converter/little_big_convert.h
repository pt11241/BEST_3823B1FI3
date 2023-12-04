#include <math.h>

// unsigned int - 4 байт * 8 = 32 бита
unsigned int little_big_convert(unsigned int input){ 
    // 123456 - 3 байта
    // 1 11100010 01000000
    // 256 ^ 3 * 64 + 256^2 * 226 + 256 * 1 
    return (((input>>24)&0x000000ff) + ((input<<24)&0xff000000) + ((input>>8)&0x0000ff00) + ((input<<8)&0x00ff0000));
}
#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int minus_index = strlen(str)-1;
    for (int i = 0; i < strlen(str);i++){
        if (str[i] == sym){
            for(int j = i; str[j] != '\0'; j++){
                str[j] = str[j+1];
            }
            i = i-1;
        }
    }
}


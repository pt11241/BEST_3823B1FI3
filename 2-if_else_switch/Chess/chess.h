#include <stdio.h>

int chess_rook(char a, int b, char c, int d){
    int cnt = 0; 
    char array[8] = {'A','B','C','D','E','F','G','H'};
        for (int i = 0; i < 8; i++)  {
            if (array[i] == a) cnt++;
            if (array[i] == c) cnt++;
            
        }
    if (cnt == 2 && b > 0 && b < 9 && d > 0 && d < 9){
        if ((a == c && b != d) || (a != c && b == d)) 
            return 1;
    } 
    
    return 0;
}
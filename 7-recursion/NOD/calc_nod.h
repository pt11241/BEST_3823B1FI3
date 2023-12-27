#include <math.h>

int nod_pluce(int first, int sec, int num){
    if (first == 0 && num != 0) return sec;
    if (sec == 0 && num != 0) return first;
    if((first == 0 || sec == 0) && num == 0) return -1;
    if(sec >= first){
        return nod_pluce(first, sec - (sec / first)*first, num + 1);
    }
    else{
        return nod_pluce(first - (first / sec) * sec, sec,num + 1);
    }
}
int nod(int first, int second){
    return nod_pluce(first,second,0);
   
    
}

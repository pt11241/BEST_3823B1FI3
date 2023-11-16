#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0;
    int m1 = 0;
    int left1 = left;
    while (m1 != number){
        int m = (left + right)/2;
        i++;
        if (m == number){
            break;
      
        }
        else{
            if (number < m) right = m - 1;
            else left = m + 1;
        }
        m1 = m;
    }
    return i * (number - left1); //НЕ МЕНЯТЬ!
}
#include <math.h>

#define PI 3.14159265

int scalar_product(int* vec1, int* vec2, int size){
    float vec_prod = 0;
    for (int i = 0; i < size; i++){
        vec_prod += vec1[i] * vec2[i];
    }
    float sum_sqrt1 = 0;
    float sum_sqrt2 = 0;
    for (int i = 0; i < size; i++){
        sum_sqrt1 += pow(vec1[i],2);
        sum_sqrt2 += pow(vec2[i],2);

    }
    float znam1 = (pow(sum_sqrt1 * sum_sqrt2,0.5));
    float total = acos(vec_prod / znam1);  
    
    return (int)(total * 180 / PI);;

}

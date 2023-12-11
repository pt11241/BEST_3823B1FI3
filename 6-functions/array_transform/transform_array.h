#include <math.h>

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++){
        if (comands[i] == 1){
            for (int i = 0; i < size; i++) array[i] += 1;
        }
        if (comands[i] == 2){
            for (int i = 0; i < size; i++) array[i] = pow(abs(array[i]),0.5);
        }
        if (comands[i] == 3){
            double sr_ar = 0;  
            for (int i = 0; i < size; i++){
                sr_ar += array[i]/(double)size; // c size pr
            }
            for (int i = 0; i < size; i++){
                array[i] = pow(abs(array[i]),sr_ar);
            }
        }
        if (comands[i] == 4){
            for (int i = 0; i < size; i++){
                if ((int)array[i] % 2 == 0){

                 array[i] = (int)array[i]*(-1);
                }
                if ((int)array[i] % 2 != 0) array[i] = 0;
            }
        }
        if (comands[i] = 5){
            for (int i = 0; i < size; i++){
                if (((int)array[i]) % 2 == 0 && i % 2 == 0) array[i] = 0;
            }
        }
        if (comands[i] == 6){
            for (int i = 0; i < size / 2; i++){
                if (array[i] < 0) array[i] = array[i]*(-1);
                if (array[i] == 0) array[i] +=1;
            }
            for (int i = size / 2; i < size; i++){
                array[i] = -1;
            }
        }
    }
    return;
}

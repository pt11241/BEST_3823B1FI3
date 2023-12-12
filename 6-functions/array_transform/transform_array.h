#include <math.h>

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++){
        if (comands[i] == 1){
            for (int j = 0; j < size; j++) array[j] += 1;
        }   
        if (comands[i] == 2){
            for (int j = 0; j < size; j++) array[j] = pow(fabs(array[j]),0.5);
        }
        if (comands[i] == 3){
            double sr_ar = 0;  
            for (int j = 0; j < size; j++){
                sr_ar += array[j]/(double)size; // c size pr
            }
            for (int j = 0; j < size; j++){
                array[j] = pow(fabs(array[j]),sr_ar);
            }
        }
        if (comands[i] == 4){
            for (int j = 0; j < size; j++){
                if ((int)array[j] % 2 == 0){

                 array[j] = (int)array[j]*(-1);
                }
                if ((int)array[j] % 2 != 0) array[j] = 0;
            }
        }
        if (comands[i] == 5){
            for (int j = 0; j < size; j++){
                if (((int)array[j]) % 2 == 0 && j % 2 == 0) array[j] = 0;
            }
        }
        if (comands[i] == 6){
            for (int j = 0; j < size / 2; j++){
                if (array[j] < 0) array[j] = array[j]*(-1);
                if (array[j] == 0) array[j] +=1;
            }
            for (int j = size / 2; j < size; j++){
                array[j] = -1;
            }
        }
    }
    return;
}

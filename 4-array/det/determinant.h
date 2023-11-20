#include <math.h>
#include <stdio.h>

int chetnost(int arr[], int size){
    int n = 0, j = 0;
    while (j != size){
        for (int i = j + 1; i < size; i++){
            if (arr[j] > arr[i]) n++;
        }
        j++;
    }
    return n;
}   

int determinant(int matrix[], int size){
    int sum = 0;
    int size_n = pow(size, 0.5);
    if (size_n != pow(size, 0.5)) return -404; 
    // int flag = 1;
    for (int i = 0; i < size_n; i++){
        for (int j = 0; j < size_n; j++){
            if (size_n > 2){
                for (int k = 0; k < size_n; k++){
                    if (size_n > 3){
                        for (int o = 0; o < size_n; o++){
                            if (size_n > 4){
                                for (int h = 0; h < size_n; h++){
                                    if ( i != o && i != k && i != j && j != o && j != k && k != o && o != h && h != k && h != j && h != i){
                                        int arr_3[5] = {i, j, k, o, h}; 
                                        sum += matrix[i * size_n + 0] *
                                        matrix[j * size_n + 1] * matrix[k * size_n + 2] *
                                        matrix[o * size_n + 3] * matrix[h * size_n + 4] * pow(-1,chetnost(arr_3, size_n));
                                        }
                                }   
                            }
                            else{
                                if (i != j && j != k && k != o && o != j && i != k && i != o){
                                    int arr_2[4] = {i, j, k, o};
                                    sum += matrix[i * size_n + 0] * matrix[j * size_n + 1] * matrix[k * size_n + 2] * 
                                    matrix[o * size_n + 3] * pow(-1,chetnost(arr_2, size_n));
                                } 
                            }
                        }
                    }
                    else{ 
                        if(i != j && j != k && i != k) {
                            int arr_1[3] = {i, j, k};
                            sum += matrix[i * size_n + 0] * matrix[j * size_n + 1] * matrix[k * size_n + 2] * pow(-1,chetnost(arr_1,size_n));
                        }
                    }
                }
            }
            else {
                if (i != j){
                    int arr[2] = {i, j};
                    sum += matrix[i * size_n + 0] * matrix[j * size_n + 1] * pow((-1),chetnost(arr,size_n));
                }
            
                 
            }
        }
    }
    return sum;
}
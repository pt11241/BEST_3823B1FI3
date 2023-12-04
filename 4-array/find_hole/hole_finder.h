#include <math.h>
#include <stdlib.h>

int proverka_8_elem(int matrix[], int x, int y, int len, int wid){
    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 1; j++){
        if (!(i == 0 && j == 0)){
                if (matrix[(x - i) * len + y - j] <= matrix[x * len + y] || 
                    matrix[(x + i) * len + y + j] <= matrix[x * len + y] || 
                    matrix[(x + i) * len + y - j] <= matrix[x * len + y] ||
                    matrix[(x - i) * len + y + j] <= matrix[x * len + y] ){
                    return 0;
                }
            }
        }
    }   
    return 1; 
}


int hole_finder(int matrix[], int length, int width){
    int size = 1, iter = 0, min = 1000000000, size_n = 0;
    int index_ans = 0;
    int* arr = (int*)malloc(sizeof(int) * size);
    int* arr_1 = (int*)malloc(sizeof(int) * size);
    
    for (int i = 0; i < length; i++){
        for (int j = 0; j < width; j++){
            if (i == 0 || j == 0 || i == length - 1 || j == width - 1){
                continue;
            }
            if (proverka_8_elem(matrix, i, j, length, width) == 1){
                arr[iter] = matrix[i * length + j];
                arr_1[iter] = i * 100 + j;
                iter++;                
            }
        }
    }
  
    for (int i = 0; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
            index_ans = arr_1[i];
        }
    }
    free(arr);
    free(arr_1);
    return index_ans;
}
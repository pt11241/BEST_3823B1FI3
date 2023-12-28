#include <math.h>

int check_array(int* arr, int size, int* array_sub, int size_sub, int cur_index_arr){
    int index_array_sub = 0;
    int flag = 1;
    while (index_array_sub != size_sub -1){
        if (array_sub[index_array_sub] == arr[cur_index_arr]){
            index_array_sub++;
            cur_index_arr++;
        }
        else{
            flag = 0;
            break;
        }
    }
    return flag;
}   

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int index_sum = 0;
    int flag1 = -1, flag2 = -1, flag3 = -1;
    for (int i = 0; i < array_size; i++){
        if (array[i] == subarray1[0] && flag1 == -1){
            if(check_array(array,array_size,subarray1,subarray_size1, i)){
                flag1 = i;
            }
        }
        if(array[i] == subarray2[0] && flag2 == -1){
            if(check_array(array,array_size,subarray2,subarray_size2, i)){
                flag2 = i;
            }
        }
        if(array[i] == subarray3[0] && flag3 == -1){
            if(check_array(array,array_size,subarray3,subarray_size3, i)){
                flag3 = i;              
            }
        }
    }
    index_sum = flag1 + flag2 + flag3;
    return index_sum;
}

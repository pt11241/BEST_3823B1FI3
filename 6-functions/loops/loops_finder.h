#include <math.h>

void search_start(int* start_row, int* start_col, int* arr, int size){
    int size_gr = pow(size, 0.5);
    for (int i = 0; i < pow(size,0.5);i++){
        if (arr[i * size_gr] == 1){
            *start_row = i;
            *start_col = 0; 
        }
    }
}
void nec_index(int* ind_1,int* ind_2, int* arr, int size){
    int cnt_1 = 0;
    if (*ind_2 == 0){
        if (*ind_1 == 0){

        }
        if (*ind_1 == (int)pow(size,0.5)){

        }

    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            int size_gr = pow(size,0.5);
            if(arr[(*ind_1 - i) * size_gr + *ind_2 + j] == 1){
                *ind_1 = *ind_1 - i;
                *ind_2 = *ind_2 + j;
                cnt_1++;
            };
            if(arr[(*ind_1 + i) * size_gr + *ind_2 + j] == 1){
                *ind_1 = *ind_1 - i;
                *ind_2 = *ind_2 + j;
                cnt_1++;
            }
            if(arr[(*ind_1 - i) * size_gr + *ind_2 - j] == 1){
                *ind_1 = *ind_1 - i;
                *ind_2 = *ind_2 + j;
                cnt_1++;
            }
            if(arr[(*ind_1 + i) * size_gr + *ind_2 - j] == 1){
                *ind_1 = *ind_1 - i;
                *ind_2 = *ind_2 + j;
                cnt_1++;
            } 
        }
    }
}
int way(int start_r, int start_c, int* arr, int size, int* finish_1, int* finish_2){
    int konec = 0;
    int size_gran = pow(size,0.5);
    int index_r = start_r, index_c = start_c;
    arr[index_r * size_gran + index_c] = 2; // 2 - те по которым прошел
    while (konec != 1){
        int copy_1 = index_r, copy_2 = index_c;
        nec_index(&index_r, &index_c, arr, size);
        if (index_r == copy_1 && index_c == copy_2){
            *finish_1 = index_r;
            *finish_2 = index_c;
            konec = 1;
        }
        arr[index_r * size_gran + index_c] = 2;
    }

    return 0;
}
void find_loops(int* pic, int size, int* num_loop, int* start_row, int* start_col, int* finish_row, int* finish_col){
    search_start(start_row, start_col, pic, size);
    way(*start_row, *start_col, pic, size, finish_row, finish_col);

    return;
}

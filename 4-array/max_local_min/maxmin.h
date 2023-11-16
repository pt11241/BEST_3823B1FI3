int maxmin(int input[], int size){
    int n = 1;
    int* arr = (int*)malloc(sizeof(int) * n);
    if (input[0] < input[1]){
        arr[n - 1] = input[0];
        n++; 
    }
    if (input[size-1] < input[size-2]){
        arr[n - 1] = input[size - 1];
        n++;
    } 
    for (int i = 1; i < size-1; i++){
        if (input[i] < input[i - 1] && input[i] < input[i + 1]){
            arr[n - 1] = input[i];
            n++;
        }
    }
    int max = -1;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > max) max = arr[i];
    }
    free(arr);
    return max;
}
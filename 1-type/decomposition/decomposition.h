#include<math.h>
int reverse(int number) {
    int sum = 0, i = 0, num = number, io = 0;
    while (number > 0){
        i++;
        number /=10;
    }

    int arr[i];
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        arr[i] = num % 10;
        num /= 10;  
    }
    for (int i = sizeof(arr)/sizeof(int) - 1; i >= 0 ; i--){
        sum += arr[i] * pow(10,io);
        io++;
    }
    return sum; 
}

double decomposition(int number) {
    int cnt = 0, num = number;
    while (number > 0){
        cnt++;
        number /= 10;
    }   
    double arr[cnt];
    for (int i = 0; i < cnt; i++){
        arr[i] = (num % 10) * pow(10,i);
        num /= 10;
    }
    double znam = 0;
    for (int i = 0; i < cnt; i++){
        znam += 1/(double)arr[i];
    }
    double ans = cnt / znam;
    return ans; // Not implementation
}

int append(int number, int start, int end) {
    int num = number;
    int cnt_num = 0;
    int res = 0;
    while (number > 0){
        cnt_num ++;
        number /= 10;
    }
    if(start >= 0){
        res = (start * pow(10,cnt_num) + num)*10 + end;
    }
    else{
        res = (-1)*((abs(start) * pow(10,cnt_num) + num)*10 + end);
    }
    return res; 
}

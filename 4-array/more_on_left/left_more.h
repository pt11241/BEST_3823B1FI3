char left_more(double input[], unsigned int size){
    char cnt = 0;
    for (int i = 1; i < size; i++){
        if (input[i] > input[i - 1]) cnt++;
    }
    return cnt;
}
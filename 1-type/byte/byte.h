unsigned char max_byte(unsigned short number) {
    int cnt_bait = 0;
    int cnt_bit = 0;
    int num = number;
    while (number > 1){
        number /= 2;
        cnt_bit++; 
    }  
    if (cnt_bit % 8 == 0){
        cnt_bait = cnt_bit / 8;
    }
    else{
        cnt_bait = (cnt_bit / 8) + 1;
    }
    int max = -100000000;
    for (int i = 0; i < cnt_bait; i++){
        if((num>>8*i & 0xFF)> max){
            max = (num>>8*i & 0xFF);
        }
    }
    return max;
}

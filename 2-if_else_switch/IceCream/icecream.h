int icecream(int x){
    if (x == 0) return 0;
    if (x % 3 == 0 || x % 5 == 0){
        return 1;
    }
    else{
        int new = x % 3;
        int new_1 = x % 5;
        if (new % 3 == 0 || new % 5 == 0) return 1;
        if (new_1 % 3 == 0 || new_1 % 5 == 0) return 1;

        return 0;
    }
    
    
}
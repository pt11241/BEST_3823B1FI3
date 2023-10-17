long long change(int a, int b, int c, int d){
    long long zaplatil = c * 100 + d, price = a * 100 + b;
    if (zaplatil < price){
        return -1;
    }
    long long sdacha = (c - a) * 100 + (d - b);
    return  sdacha;
}
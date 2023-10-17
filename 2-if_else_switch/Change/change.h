long long change(int a, int b, int c, int d){
    long long zaplatil = (long long)c * 100 + (long long)d, price = (long long)a * 100 + (long long)b;
    if (zaplatil < price){
        return -1;
    }
    return zaplatil - price;
}
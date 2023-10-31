long fibo(int n){
    long S = 0;
    
}

long fib(int m){
    long S = 0;
    for (int i = 0; i<=m;i++){
        S+=fibo(i);
    }
    return S;
}
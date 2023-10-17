int chocolate(int n, int m, int k){
    int flag = 1; 
    if ((n <= 0) || (m <= 0)) flag = 0;
    if ((flag == 1 && (k % n == 0 || k % m == 0) && k <= m * n)) return 1;
    return 0;
    
}
#include<math.h>

long long calc_row(int n, long long k){
    long long ans = 0;
    for (long long i = 1; i <= n; i++){
        ans += i*k;
    }
    if (abs(ans) >= pow(2,30)){
        return 0;
    }
    return ans;
}
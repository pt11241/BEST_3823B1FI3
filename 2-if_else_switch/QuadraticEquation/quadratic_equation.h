#include <math.h>
int QuadraticEquation(double a, double b, double c){
    double D = b*b - 4*a*c;
    if (D >= 0){
        double x1 = (-b + sqrt(D)) / 2 * a; 
        double x2 = (-b - sqrt(D)) / 2 * a;
        if (D == 0){
            return x1;
        }
        return (int)(x1 + x2);
    }
    else{
        double sum_k = -b/a;
        return sum_k;
    }
    
    return 0;
}
#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double pervoob_left = (a/3)*pow(left,3) + (b/2)*pow(left,2) + c * left;
    double pervoob_right = (a/3)*pow(right,3) + (b/2)*pow(right,2) + c * right;  
    return pervoob_right-pervoob_left;
}
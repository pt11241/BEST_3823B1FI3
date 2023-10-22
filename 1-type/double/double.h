#include<math.h>
bool compare_double(double x, double y) {
    return fabs(y-x) < 0.000001;
    
}

int get_nearest_int(double x) {
    int int_x = (int)x;
    double r = x - int_x;
    if (r >= 0.50) return int_x + 1;
    return int_x; 
}

double get_fractional(double x) {
    if (x > 0){
        double y = x - (int)x;
        return y;
    }
    else{
        double y = x - ((int)x - 1);
        return y;
    }
 
}

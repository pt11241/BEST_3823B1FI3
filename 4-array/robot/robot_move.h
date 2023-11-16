#include <math.h>

char robot_move(int xs[], int ys[], int num_points, double area_radius, int xt, int yt){
    for (int i = 0; i < num_points; i++){
        double ocr = pow((xs[i] - xt),2) + pow((ys[i] - yt),2);
        if (ocr < pow(area_radius,2)) return 0;
        
    }
    return 1;
}
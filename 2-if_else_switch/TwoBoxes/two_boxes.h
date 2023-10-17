int twoboxes(double x1, double y1, double z1, double x2, double y2, double z2){
    double v1 = x1 * y1 * z1, v2 = x2 * y2 * z2;
    int flag = 0;
    if (((x1 > x2) && (y1 > y2) && (z1 > z2)) || (((x2 > x1) && (y2 > y1) && (z2 > z1)))){
        flag = 1;
    }
    if (((v1 > v2) || (v2 > v1)) && flag == 1 && x1 > 0 && x2 > 0 && y1 > 0 && y2 > 0 && z1 > 0 && z2 > 0){
        return 1;
    }
    return 0;
}
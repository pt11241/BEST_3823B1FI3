int get_time(long long angle) {
    int hours = 0, min = 0, sec = 0;
    int hours_c = 0;
    if (angle % 6 == 0){
        int sec_up = (int)angle / 6;
        hours_c = sec_up % (3600);
        hours = (sec_up / 3600) * 10000; 
        sec = hours_c % 60; 
        min = (hours_c / 60) * 100;
        return hours + min + sec;

    }
    else return 0;

    

}


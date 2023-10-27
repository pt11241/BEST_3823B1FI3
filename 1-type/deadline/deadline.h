int get_score(short score, int start, int stop, int now) {
    float r = score / 2, result = 0;
    int ans = 0;
    if(now >= stop){
        return (score + 1) / 2; 
    } 
    if(now >= start){
        return score;
    }
    else{
        result = r / (stop - start) * (now - start) + 0.15;
        ans = score - (int)result;
    }
    return ans;
}

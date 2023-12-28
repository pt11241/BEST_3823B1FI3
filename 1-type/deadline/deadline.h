int get_score(short score, int start, int stop, int now){
    if (now <= start){
        return score;
    }
    else if(now >= start && now <= stop){
        double score_2 = ((double)score / 2);
        double ubivanie_v_chas = score_2 / (stop - start);
        int ubilo = ubivanie_v_chas * (now-start);
        return score - ubilo;
    }
    else{
        return (score / 2) + (score % 2);
    }
}

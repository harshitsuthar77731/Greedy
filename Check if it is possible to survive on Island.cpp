int minimumDays(int S, int N, int M){
        int hol = S/7;
        float x = (float)N/(float)M;
        if(x<=1)
            return -1;
        int buy = ceil(S/x);
        if(S-hol<buy)
            return -1;
        return buy;
    }

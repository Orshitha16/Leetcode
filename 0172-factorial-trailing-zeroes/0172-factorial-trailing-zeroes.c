int trailingZeroes(int n) {
    int c,m; 
     m=n;
     c=0;
     while(m>=5)
     {
        m=m/5;
        c=c+m;
     }
     return c;
}
int alternateDigitSum(int n) {
    int m,r;
    int l=0;
    int c=0;
    m=n;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    
    while(m!=0)
    {
        r=m%10;
        if(c%2==0)
        l-=r;
        else
        l+=r;
        m=m/10;
        c--;
    }
    return l;
}
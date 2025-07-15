int sumOfTheDigitsOfHarshadNumber(int x) {
    int n,r,s;
    n=x;
    s=0;
    while(x)
    {
        r=x%10;
        s=s+r;
        x=x/10;
    }
    if(n%s==0)
    return s;
    return -1;

}
bool isSameAfterReversals(int num) {
    int n=num;
    int r,s,c;
    s=0;
    c=0;
    while(num)
    {
      r=num%10;
      s=s*10+r;
      num=num/10;
    }
    while(s)
    {
        r=s%10;
        c=c*10+r;
        s=s/10;
    }
    if(n==c)
    return 1;
    return 0;
}
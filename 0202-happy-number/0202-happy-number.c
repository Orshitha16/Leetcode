bool isHappy(int n) {
    int r,s,c;
    c=0;
    do{
    s=0;
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,2);
        n=n/10;
    }
    c++;
    n=s;
    if(s==1)
    return 1;
    }while(c<=100);
    
     return 0;
}
bool checkDivisibility(int n) {
   int r,k; 
   int m=n;
   int s=0;
   int f=1;

   if(n<10)
   return false;

    while(n!=0)
    {
        r=n%10;
        s+=r;
        f=f*r;
        n=n/10;
    }
    k=s+f;

    if(m%k==0)
    return true;
    
    return false;
}
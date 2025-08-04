class Solution {
    public boolean checkDivisibility(int n) {
       int r,s=0,f=1;
       int m=n; 
       if(n<=10)
       return false;

        while(n!=0)
        {
          r=n%10;
          s+=r;
          f=f*r;
          n=n/10;
        }
        if((s+f)%m==0)
        return true;
        return false;
    }
}
int countEven(int num) {
 int i,c,s,r,n;
 c=0;
  for(i=2;i<=num;i++){
  if(i<=9){
  if(i%2==0)
  c++; }
 else
 {  n=i;
    s=0;
    while(n)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(s%2==0)
    c++;
 }
  }
 return c;
}
 
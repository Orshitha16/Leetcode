

int fib(int n){
  int i,c,s;
  if(n==0)
  return 0;
  if(n==1||n==2)
  return 1;
  int a=1;
  int b=1;
  for(i=3;i<=n;i++)
  { 
    c=a+b;
    a=b;
    b=c;
    
  }
  return c;
}
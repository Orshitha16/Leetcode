bool isPowerOfTwo(int n) {
    int i;
   for(i=0;i<=50;i++)
   if(n==pow(2,i))
   return 1;
   return 0;
}
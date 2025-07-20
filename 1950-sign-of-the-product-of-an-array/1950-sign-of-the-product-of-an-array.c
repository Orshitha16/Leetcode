int arraySign(int* nums, int numsSize) {
    int i;
    double f;
     f=1;
    for(i=0;i<numsSize;i++)
    f = f*nums[i];
   if(f>0)
   return 1;
   else if(f<0)
   return -1;
   else 
   return 0;
}
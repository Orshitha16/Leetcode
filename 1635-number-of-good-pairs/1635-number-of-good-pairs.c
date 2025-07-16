int numIdenticalPairs(int* nums, int numsSize) {
  int i,j;
    int c=0;
   for(i=0;i<numsSize;i++)
   for(j=i+1;j<numsSize;j++)
   if(nums[i]==nums[j])
   c++; 
   return c;
}
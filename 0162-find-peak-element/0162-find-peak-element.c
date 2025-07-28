int findPeakElement(int* nums, int numsSize) {
  int big,i,k;
  big=nums[0];
  for(i=0;i<numsSize;i++)
  if(nums[i]>big)
  {
  big=nums[i];
   k=i;
  }
   return k;
}
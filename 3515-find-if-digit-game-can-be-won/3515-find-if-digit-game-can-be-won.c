bool canAliceWin(int* nums, int numsSize) {
  int s1=0;
  int s2=0;
  int i;

   for(i=0;i<numsSize;i++)
   {
    if(nums[i]<10)
    s1+=nums[i];
    else
    s2+=nums[i];
   }
   if(s1>s2 || s2>s1)
   return true;
   return false;
}
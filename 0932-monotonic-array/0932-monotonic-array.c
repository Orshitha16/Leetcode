bool isMonotonic(int* nums, int numsSize) {
    int i,j,c1,k,m;
    j=1;
    int c=0;
    for(i=0;i<numsSize-1;i++){
    if(nums[i]<=nums[j])
    c++;
     j++;
    }
    c1=0;
    k=1;
    for(i=0;i<numsSize-1;i++){
    if(nums[i]>=nums[k])
    c1++;
    k++;
    }
    m=numsSize-1;
   if(c1==m || c==m)
   return true;
   return false;
}
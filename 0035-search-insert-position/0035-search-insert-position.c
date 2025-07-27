int searchInsert(int* nums, int numsSize, int target) {
    int i;
    int f=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]==target)
    {
        f=1;
        break;
    }
     int l=0;
     if(f==0)
     {
     for(i=0;i<numsSize;i++)
     if(nums[i]>target)
     {
        l=1;
        break;
     }}
     
    
     return i;
}



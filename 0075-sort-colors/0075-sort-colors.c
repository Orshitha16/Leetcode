void sortColors(int* nums, int numsSize) {
     int i,j,c;
     for(i=0;i<numsSize-1;i++)
     for(j=i+1;j<numsSize;j++)
     if(nums[i]>nums[j])
     {
        c=nums[i];
        nums[i]=nums[j];
        nums[j]=c;
     }

}
int findGCD(int* nums, int numsSize) {
    int big=nums[0];
    int small=nums[0];
    int i,n;
    for(i=0;i<numsSize;i++)
    if(nums[i]>big)
    big=nums[i];
    for(i=0;i<numsSize;i++)
    if(nums[i]<small)
    small=nums[i];
    for(i=2;i<=1000;i++)
    if(small%i==0 &&  big%i==0)
    return i;
    return 1;


}
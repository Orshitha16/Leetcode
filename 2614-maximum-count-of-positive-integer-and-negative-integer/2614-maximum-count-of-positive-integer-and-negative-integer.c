int maximumCount(int* nums, int numsSize) {
    int i,c1,c2;
    c1=0;
    c2=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]>0)
    c1++;
    else if(nums[i]<0)
    c2++;
    if(c1>c2)
    return c1;
    return c2;

}
int minElement(int* nums, int numsSize) {
    int i,n,r,s,small;
    for(i=0;i<numsSize;i++){
    n=nums[i];
    s=0;
    while(n)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    nums[i]=s;
    }
    small=nums[0];
    for(i=0;i<numsSize;i++)
    if(nums[i]<small)
    small=nums[i];

    return small;

}
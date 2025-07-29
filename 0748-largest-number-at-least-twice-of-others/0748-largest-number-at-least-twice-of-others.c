int dominantIndex(int* nums, int numsSize) {
    int big,k,i,c,j,m;
    int a[100];
    big=nums[0];
    c=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]>big)
    {
        big=nums[i];
        k=i;
    }
    j=0;
     for(i=0;i<numsSize;i++)
     if(big!=nums[i])
         a[j++]=nums[i];
    
     for(i=0;i<j;i++)
     if(big>=a[i]*2)
     c++;
    m=numsSize-1;
    if(c==m)
    return k;
     return -1;

}
    
    
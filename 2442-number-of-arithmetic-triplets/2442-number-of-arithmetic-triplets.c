int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int i,j,k,c;
    c=0;
    for(i=0;i<numsSize;i++)
    for(j=0;j<numsSize;j++)
    for(k=0;k<numsSize;k++)
    if((nums[j]-nums[i]==diff) && (nums[k]-nums[j]==diff))
    c++;
    return c;
}
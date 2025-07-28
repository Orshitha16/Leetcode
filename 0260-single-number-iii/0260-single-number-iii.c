/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int i,j,f,c,k;
    int *a;
    a=(int*)malloc(10000*sizeof(int));
    k=0;
    for(i=0;i<numsSize;i++)
    {
        f=0;
    for(j=0;j<i;j++)
    if(nums[i]==nums[j])
    {
        f=1;
        break;
    }
    if(f==0)
    {    c=0;
        for(j=i;j<numsSize;j++)
        if(nums[i]==nums[j])
        c++;
    if(c==1)
    a[k++]=nums[i];
    }
    }

*returnSize=k;
 return a;
}
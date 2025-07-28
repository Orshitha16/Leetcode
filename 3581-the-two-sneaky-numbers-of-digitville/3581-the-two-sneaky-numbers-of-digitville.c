/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int i,j,k;
    int f,c;
    int *a;
    k=0;
    a=(int*)malloc(100*sizeof(int));
    for(i=0;i<numsSize;i++)
    { f=0;
    for(j=0;j<i;j++)
    if(nums[i]==nums[j])
    {
        f=1;
        break;
    }
    if(f==0)
    {
        c=0;
        for(j=i;j<numsSize;j++)
        if(nums[i]==nums[j])
        c++;
        if(c==2)
        a[k++]=nums[i];
    }
    }
    *returnSize=k;
    return a;
}
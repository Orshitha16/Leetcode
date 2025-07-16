/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *a;
    int i,c,j;
    a=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++)
    a[i]=abs(nums[i]*nums[i]);
    for(i=0;i<numsSize-1;i++)
    for(j=i+1;j<numsSize;j++)
    if(a[i]>a[j])
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
    *returnSize=numsSize;
    return a;
}
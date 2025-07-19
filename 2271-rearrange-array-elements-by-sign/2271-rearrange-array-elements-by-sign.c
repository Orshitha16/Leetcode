/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int *a;
    int i,j,c,k,n,m;
    int b[100000],d[100000];
    k=0;
    j=0;
    a=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++)
    if(nums[i]>0)
    b[j++]=nums[i];
    else
    d[k++]=nums[i];
    n=j+k;
    m=0;
    j=0;
    i=0;
    while(i<n/2)
    {
    a[m]=b[j];
    m++;
    a[m]=d[j];
    m++;
    j++;
    i++;
    }
    *returnSize=n;
    return a;
}
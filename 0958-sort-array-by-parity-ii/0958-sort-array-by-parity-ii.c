/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int  *ans;
    ans=(int*)malloc(numsSize*sizeof(int));
    int i,j,k,n,m;
    int a[10000],b[10000];

    j=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]%2==0)
    a[j++]=nums[i];

    k=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]%2!=0)
    b[k++]=nums[i];

    n=j+k;
    m=0;
    for(i=0;i<n/2;i++)
    {
       ans[m++]=a[i];
       ans[m++]=b[i];
    }
    *returnSize=m;
    return ans;

}
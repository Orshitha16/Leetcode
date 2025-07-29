/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int i,c,j,k;
    int *ans;
    ans=(int*)malloc(numsSize*sizeof(int));
    k=0;
    for(i=0;i<numsSize;i++)
    {
        c=0;
        for(j=0;j<numsSize;j++)
        if(nums[i]>nums[j])
        c++;
        ans[k++]=c;
    }
    *returnSize=k;
    return ans;

}
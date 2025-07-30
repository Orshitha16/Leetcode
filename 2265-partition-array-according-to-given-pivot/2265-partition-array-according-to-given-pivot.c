/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {   int *a;
    int i,k;
    
    a=(int*)malloc(100000*sizeof(int));
    k=0;

    for(i=0;i<numsSize;i++)
    if(nums[i]<pivot)
    a[k++]=nums[i];
   
    for(i=0;i<numsSize;i++)
    if(nums[i]==pivot)
    a[k++]=nums[i];
    for(i=0;i<numsSize;i++)
    if(nums[i]>pivot)
    a[k++]=nums[i];
    
    *returnSize=k;
    return a;


}
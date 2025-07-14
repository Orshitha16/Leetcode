/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j,k;
    int *a;
    a=(int*)malloc(numsSize*sizeof(int));
    k=0;
   for(i=0;i<numsSize;i++)
   for(j=i+1;j<numsSize;j++)
    if(*(nums+i)+*(nums+j)==target)
    {
      a[k]=i;
      k++;
      a[k]=j;
      k++;
     break;
    }
    *returnSize =k;
    return a;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortEvenOdd(int* nums, int numsSize, int* returnSize) {
    int a[100],b[100];
    int i,j,k,l,c,m;
    int *ans;
    ans=(int*)malloc(100*sizeof(int));
    k=0;
    l=0;

    for(i=0;i<numsSize;i++)
    if(i%2==0)
    a[k++]=nums[i];
    else
    b[l++]=nums[i];

    for(i=0;i<k-1;i++)
    for(j=i+1;j<k;j++)
    if(a[i]>a[j])
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }

    for(i=0;i<l-1;i++)
    for(j=i+1;j<l;j++)
    if(b[i]<b[j])
    {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
    }
   m=0;
   
    for(i=0;i<numsSize/2;i++)
    {
        ans[m++]=a[i];
        ans[m++]=b[i];
    }
    if(a[i]>0)
    ans[m++]=a[i];
    *returnSize=m;
    return ans;

}
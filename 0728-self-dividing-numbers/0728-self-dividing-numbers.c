/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i,n,k,r;
    int *a;
    k=0;
    a=(int*)malloc(100000*sizeof(int));
    for(i=left;i<=right;i++)
    {n=i;
    if(i<=9)
    a[k++]=i;
    else
    { 
    while(n)
    {
        r=n%10;
        if(r == 0 || i%r != 0)
        break;
        n=n/10;
    }
    if(n==0)
    a[k++]=i;
    }
    
    }
    *returnSize=k;
    return a;
}
    
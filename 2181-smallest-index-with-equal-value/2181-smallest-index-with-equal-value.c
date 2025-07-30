int smallestEqual(int* nums, int numsSize) {
    int i,k,small,c;
    int a[100];
    k=0;
    c=0;
    for(i=0;i<numsSize;i++)
    if(i%10==nums[i])
    {
    a[k++]=i;
    c++;
    }

    small=a[0];
    for(i=0;i<k;i++)
    if(a[i]<small)
    small=a[i];

    if(c>0)
    return small;
    return -1;
    

}
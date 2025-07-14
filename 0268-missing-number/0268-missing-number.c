int missingNumber(int* nums, int numsSize) {
    int i,j,f;
    for(i=0;i<numsSize;i++)
    { f=0;
    for(j=0;j<numsSize;j++)
    if(*(nums+j)==i)
    {
        f=1;
        break;
    }
    if(f==0)
    return i;
    }
    return i;

}
int removeElement(int* nums, int numsSize, int val) {
    int i,j,f,k;
    k=0;
    for(i=0;i<numsSize;i++)
    {
        f=0;
        for(j=0;j<numsSize;j++)
        if(*(nums+i)==val)
        {
            f=1;
            break;
        }
        if(f==0)
        {
           *(nums+k)=*(nums+i);
           k++;
        }
    }
    return k;
}
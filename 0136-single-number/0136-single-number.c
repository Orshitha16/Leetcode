int singleNumber(int* nums, int numsSize) {
    int i,j,f,k,c;
    for(i=0;i<numsSize;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        if(*(nums+i)==*(nums+j))
        {
            f=1;
            break;
        }
        if(f==0)
        {  c=0;
            for(j=i;j<numsSize;j++)
            if(*(nums+i)==*(nums+j))
            c++;
            if(c<=1){
             k=*(nums+i);
            break;
            }
        }
    }
    
    return k;
}
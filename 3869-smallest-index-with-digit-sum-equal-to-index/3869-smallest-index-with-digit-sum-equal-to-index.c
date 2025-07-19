int smallestIndex(int* nums, int numsSize) {
    int s,m,r,i;
    for(i=0;i<numsSize;i++)
    {
    if(nums[i]<9 ){
     if(nums[i]==i)
        return i;
    }
     else
     {
       s=0;
       m=nums[i];
     while(m)
     {
        r=m%10;
        s=s+r;
        m=m/10;
     }
     if(s==i)
     return i;
     }

}
return -1;
}
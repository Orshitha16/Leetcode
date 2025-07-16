int findNumbers(int* nums, int numsSize) {
    int i,c,r,n,m;
    m=0;
    for(i=0;i<numsSize;i++){
       c=0; 
    while(nums[i])
    {
        r=nums[i]%10;
        c++;
        n=nums[i]/10;
        nums[i]=n;
        if(nums[i]==0)
        break;
    }
    
    if(c%2==0)
     m++;
    }
     return m;
}
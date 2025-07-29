int sumOfSquares(int* nums, int numsSize) {
    int i,s;
    s=0;
    for(i=1;i<=numsSize;i++)  
        if(numsSize%i==0)
        s+=nums[i-1]*nums[i-1];

    return s;

}
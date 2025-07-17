int averageValue(int* nums, int numsSize) {
    int i,k;
    int s=0;
    int c=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]%2==0 && nums[i]%3==0){
    s+=nums[i];
    c++;
    }
    if(c>=1){
    k=s/c;
    return k;
    }
    return 0;
    
   
}
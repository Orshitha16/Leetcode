int maxProduct(int* nums, int numsSize) {
    int big,i,j,m;
    big=(nums[0]-1)*(nums[1]-1);
    for(i=0;i<numsSize;i++){
    for(j=i+1;j<numsSize;j++){
        m=(nums[i]-1)*(nums[j]-1);
    if(m>big)
    big=m;
    }
    }
    return big;
    }
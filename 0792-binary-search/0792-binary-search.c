int search(int* nums, int numsSize, int target) {
    int l,r,mid;
    mid=0;
    l=0;
    r=numsSize-1;
    while(l<=r){
        mid=(l+r)/2;
        if(target==nums[mid])
        return mid;
        else if(target>nums[mid])
        l=mid+1;
        else
        r=mid-1;
    } 

  return -1;
    }

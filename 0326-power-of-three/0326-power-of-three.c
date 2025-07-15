bool isPowerOfThree(int n) {
    int i;
    for(i=0;i<=50;i++)
    if(n==pow(3,i))
    return 1;
    return 0;
}
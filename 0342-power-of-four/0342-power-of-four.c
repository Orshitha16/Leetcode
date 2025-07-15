bool isPowerOfFour(int n) {
    int i;
    for(i=0;i<=100;i++)
    if(n==pow(4,i))
    return 1;
    return 0;
}
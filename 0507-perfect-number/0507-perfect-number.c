bool checkPerfectNumber(int num) {
    int i,s;
    for(i=1;i<=num/2;i++)
    if(num%i==0)
    s=s+i;
    if(num==s)
    return 1;
    return 0;
}
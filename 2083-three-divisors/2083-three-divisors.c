bool isThree(int n) {
    int i,c;
    for(i=1;i<=10000;i++)
    if(n%i==0)
    c++;
    if(c==3)
    return 1;
    return 0;

}
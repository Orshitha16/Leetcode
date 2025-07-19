int kthFactor(int n, int k) {
    
    int i,m,a[100];
    m=0;
    for(i=1;i<=n;i++)
    if(n%i==0)
    a[m++]=i;
     for(i=0;i<m;i++)
     if(i==(k-1))
    return a[i];
    return -1;

    
}
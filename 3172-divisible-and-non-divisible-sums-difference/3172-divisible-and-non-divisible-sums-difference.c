int differenceOfSums(int n, int m) {
    int i,j,k,s1,s2,d;
    int*a,*b;
    a=(int*)malloc(1000*sizeof(int));
    b=(int*)malloc(1000*sizeof(int));
    j=0;
    k=0;
    for(i=1;i<=n;i++)
    if(i%m!=0)
    a[j++]=i;
    else
    b[k++]=i;
    s1=0;
    for(i=0;i<j;i++)
    s1+=a[i];
    s2=0;
    for(i=0;i<k;i++)
    s2+=b[i];
    d=s1-s2;
    return d;
}
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i,s,a[100],j,k,big;
    k=0;
    for(i=0;i<accountsSize;i++)
    { s=0;
    for(j=0;j<*accountsColSize;j++)
       s+=accounts[i][j];
       a[k++]=s;
    }
    big=a[0];
    for(i=0;i<k;i++)
    if(a[i]>big)
    big=a[i];
    return big;
}

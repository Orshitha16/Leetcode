int largestAltitude(int* gain, int gainSize) {
    int i,big;
    int b[100000];
    int k;
    int s;
     b[k++]=0;
    
    for(i=0;i<gainSize;i++)
    {
        s=b[i]+gain[i];
        b[k++]=s;
    }
    big=b[0];
    for(i=0;i<k;i++)
    if(b[i]>big)
    big=b[i];
return big;
}
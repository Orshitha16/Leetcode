int heightChecker(int* heights, int heightsSize) {
    int i,j,c,c1;
    int b[100];
    c1=0;
    for(i=0;i<heightsSize;i++)
      b[i]=heights[i];
      for(i=0;i<heightsSize-1;i++)
      for(j=i+1;j<heightsSize;j++)
      if(b[i]>b[j])
      {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
      }
      for(i=0;i<heightsSize;i++)
      if(heights[i]!=b[i])
       c1++;
       return c1;
}
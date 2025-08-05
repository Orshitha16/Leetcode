int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int i,j;
    int c=0;

    for(i=0;i<fruitsSize;i++)
    for(j=0;j<basketsSize;j++)
    if(fruits[i]<=baskets[j])
    {
        c++;
        baskets[j]=0;
        break;
    }
   return fruitsSize-c;
}
int addDigits(int num) {
    int  r,s;
    do{
        s=0;
    while(num!=0)
    {
        r=num%10;
        s=s+r;
        num=num/10;
    }
    num=s;
     } while(s>9);
 
     return s;
}
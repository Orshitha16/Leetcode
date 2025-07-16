int numberOfSteps(int num) {
    int c=0;
    while(num)
    {
        if(num%2==0){
        c++;
        num=num/2;
        }
        if(num%2!=0){
        num=num-1;
        c++;
        }
    }
    return c;
}
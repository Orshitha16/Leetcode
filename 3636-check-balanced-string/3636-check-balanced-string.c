bool isBalanced(char* num) {
    int se,so;
    int n=strlen(num);
    se=0;
    so=0;
    int i;
    for(i=0;i<n;i++)
    {
    if(i%2==0)
    se+=num[i]-48;
    else
    so+=num[i]-48;
    }
    if(se==so)
    return true;
    return false;
}
bool judgeCircle(char* moves) {
    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;
    int i=0;
    while(moves[i]!='\0')
    i++;
    int  n=i;
    for(i=0;i<n;i++)
    if(moves[i]=='U')
    c1++;
    else if(moves[i]=='D')
    c2++;
    else if(moves[i]=='L')
    c3++;
    else if(moves[i]=='R')
    c4++;
    if(c1==c2 && c3==c4)
    return true;
    return false;
}
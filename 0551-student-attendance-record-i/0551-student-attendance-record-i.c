bool checkRecord(char* s) {
    int n,i;
    n=strlen(s);
    int c=0;
    for(i=0;i<n;i++)
    {
     if(s[i]=='L'&&s[i+1]=='L'&& s[i+2]=='L')
    return 0;
    else if(s[i]=='A')
     c++;
    if(c>=2)
    return 0;
    }
   return 1;

}
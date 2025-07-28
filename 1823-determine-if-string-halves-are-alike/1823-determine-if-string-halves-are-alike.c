bool halvesAreAlike(char* s) {
    int i,c1=0,c2=0,n=strlen(s);
    
    for(i=0;i<n/2;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')

        c1++;
    }

    for(i=n/2;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')

        c2++;
    }

    return c1==c2;
    

}
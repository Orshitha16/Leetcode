char* makeFancyString(char* s) {
    int i,j,n;
    char *a = (char*)malloc(10000000*sizeof(char));
    n=strlen(s);
    if(n<=2)
    return s;
    j=0;
    a[j++]=s[j];
    for(i=1;i<n-1;i++)
    {
        if(s[i-1]==s[i] && s[i+1]==s[i])
        continue;
        else
        a[j++]=s[i];
    }
    a[j++] = s[i];
    a[j++]='\0';
    return a;

    }
    
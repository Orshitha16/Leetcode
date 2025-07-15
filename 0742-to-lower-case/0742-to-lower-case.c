char* toLowerCase(char* s) {
    int i,n;
    char *a;
    n=strlen(s);
    a=(char*)malloc(1000*sizeof(char));
    for(i=0;i<n;i++)
    a[i]=tolower(s[i]);
    a[i]='\0';
   return a;

}
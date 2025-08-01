char* greatestLetter(char* s) {
    int up[26]={0},lw[26]={0},i,j,n;
  char *a;
  n=strlen(s);
  a=(char*)malloc(n*sizeof(char));
  for(i=0;i<n;i++)
  {
   if(s[i]>='A'&&s[i]<='Z')
    up[s[i]-'A']++;
   else if(s[i]>='a'&&s[i]<='z')
    lw[s[i]-'a']++;
  }
  j=0;
  for(i=25;i>=0;i--)
  if(up[i]>0&&lw[i]>0)
  {
   a[j++]=i+'A';
   break;
  }
   a[j]='\0';
   return a;
}
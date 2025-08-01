int numberOfSpecialChars(char* word) {
    int uw[26]={0};
    int lw[26]={0};
    int c=0;
    int i;
    int n=strlen(word);
    for(i=0;i<n;i++)
    if(word[i]>='A' && word[i]<='Z')
    uw[word[i]-'A']++;
    else if(word[i]>='a' && word[i]<='z')
    lw[word[i]-'a']++;
    
   for(i=0;i<26;i++)
    if(uw[i]>0 && lw[i]>0)
    c++;

    return c;

}
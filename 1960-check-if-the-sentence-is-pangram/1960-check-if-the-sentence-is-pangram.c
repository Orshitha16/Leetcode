bool checkIfPangram(char* sentence) {
    int b[26]={0};
    int n=strlen(sentence);
    int i=0;
    int f=0;
    while(sentence[i]!='\0')
    {
    b[sentence[i]-'a']++;
    i++;
    }
    for(i=0;i<26;i++)
    if(b[i]==0)
    return false;

     return true;
}
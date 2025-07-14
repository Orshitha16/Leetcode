void reverseString(char* s, int sSize) {
      int j=sSize-1;
      for(int i=0;i<sSize/2;i++)
      {
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
        j--;
      }
}
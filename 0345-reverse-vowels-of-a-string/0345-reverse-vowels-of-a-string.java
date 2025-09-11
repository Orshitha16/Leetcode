class Solution {
    public String reverseVowels(String s) {
    int n=s.length();
    char b[] = s.toCharArray();
    String c="";
    for(int i=0;i<n;i++)
    if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
     c+=b[i];
     char d[]=c.toCharArray();
     int m=d.length;

    int j=m-1;
    for(int i=0;i<n;i++)
    if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
      b[i]=d[j--];
      String x=new String(b);
      return x;
    }
}
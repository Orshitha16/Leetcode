class Solution {
    public String sortVowels(String s) {
       char a[]=s.toCharArray();
       int n=s.length();
       int k=0;
        String s1="";
       for(int i=0;i<a.length;i++)
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        s1+=a[i];
        char b[]=s1.toCharArray();
        Arrays.sort(b);
         int j=0;
         for(int i=0;i<a.length;i++)
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        a[i]=b[j++];
        String d = new String(a);
        return d;
    }
}
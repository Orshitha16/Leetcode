class Solution {
    public void reverseString(char[] s) {
    String a=new String(s);
    String b=new StringBuffer(a).reverse().toString();
    char d[]=b.toCharArray();
    for(int i=0;i<s.length;i++)
        s[i]=d[i];
    System.out.println(Arrays.toString(d));
    }
}
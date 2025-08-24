class Solution {
    public boolean isAnagram(String s, String t) {
        int f;
        int n1 = s.length();
        int n2 = t.length();
        char a[]=s.toCharArray();
        char b[]=t.toCharArray();
        Arrays.sort(a);
        Arrays.sort(b);
        int n=Arrays.compare(a,b);
        if(n==0)
        return true;
        return false;
    }
}
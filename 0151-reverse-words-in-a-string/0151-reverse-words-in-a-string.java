class Solution {
    public String reverseWords(String s) {
       String b[]= s.split(" ");
       String c="";
       for(int i=b.length-1;i>=0;i--){
        if(b[i]!="")
           c+=b[i]+" ";
    }
        return c.trim();
    }
}
class Solution {
    public int maxFreqSum(String s) {
    char a[]=s.toCharArray();
    Map<Character, Integer> map1 = new HashMap<>();
    Map<Character, Integer> map2 = new HashMap<>();
    

    for(Character k:a)
    {
        if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u')
        {
        map1.merge(k,1,Integer::sum);
        }
        else
        {
        map2.merge(k,1,Integer::sum);
        }
    }
    
    //map1.put(k,map1.getOrDefault(k,0)+1);
    //map2.put(k,map2.getOrDefault(k,0)+1);
    
    int m1=0;
    int m2=0;

    int s1 = 0;
    int s2 = 0;

    java.util.Collection<Integer> c1 = map1.values();
    java.util.Collection<Integer> c2 = map2.values();

    for(Integer k: c1)
    if(k>m1)
      m1=k;
 
    for(Integer k: c2)
    if(k>m2)
      m2=k;

    return m1+m2;  
    }
}
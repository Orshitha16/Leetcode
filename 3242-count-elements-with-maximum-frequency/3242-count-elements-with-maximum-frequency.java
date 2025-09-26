class Solution {
    public int maxFrequencyElements(int[] nums) {
        Map<Integer, Integer> hmap = new HashMap<>();
        for(Integer k:nums)
        hmap.put(k,hmap.getOrDefault(k,0)+1);
        java.util.Collection<Integer> c = hmap.values();
        int s=0;
        int m=Integer.MIN_VALUE;
        for(Integer k:c)
        if(k>m)
            m=k;
        for(Integer k:c)
        if(k==m)
        s+=k;
        return s;
        

    }
}
class Solution {
    public boolean containsDuplicate(int[] nums) {
        List<Integer> list = new ArrayList<>();
        for(Integer k : nums)
        list.add(k);
        Set<Integer> set = new HashSet(list);
        return list.size() != set.size();
        
    }
}
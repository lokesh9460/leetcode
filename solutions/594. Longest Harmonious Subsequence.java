class Solution {
    public int findLHS(int[] nums) {
        Map<Integer,Integer> map=new HashMap<>();
        int c=0;
        for(int i:nums)
        {
            map.put(i,map.getOrDefault(i,0)+1);
        }
        for(int key:map.keySet())
        {
            if(map.containsKey(key+1))
                c=Math.max(c,map.get(key)+map.get(key+1));
        }
        return c;
        
    }
}

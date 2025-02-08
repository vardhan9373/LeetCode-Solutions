class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer>v = new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
           boolean result=v.add(nums[i]);
           if(!result)
           {
            return true;
           }
        }
      return false;
    }
}
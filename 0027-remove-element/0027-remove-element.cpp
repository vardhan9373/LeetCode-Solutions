class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                 v.push_back(nums[i]);
            }
          
        }
        nums.clear();
        for(int i=0;i<v.size();i++)
        {
                 nums.push_back(v[i]);
            
          
        }
     return nums.size();
    }
};
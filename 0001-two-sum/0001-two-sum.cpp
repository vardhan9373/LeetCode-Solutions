class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
              diff=target-nums[i];
              for(int j=i+1;j<nums.size();j++)
              {
                   if(diff==nums[j])
                   {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                   }
              }
    }
    return v;
    }
};
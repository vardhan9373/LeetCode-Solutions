class Solution {
public:
    void sortColors(vector<int>& nums) {
        multiset<int>m;
        int v=0;
        for(int i=0;i<nums.size();i++){
            m.insert(nums[i]);
        }
        for(auto it:m)
        {
            nums[v]=it;
            v++;
        }

    }
};
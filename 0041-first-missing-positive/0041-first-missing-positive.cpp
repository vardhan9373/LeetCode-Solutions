class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
              m[nums[i]]++;
            }
        }
        int count=1;
    for(auto it:m)
    {
        if(it.first!=count)
        {
            return count;
        }
        count++;
    }
return count;
    }
};
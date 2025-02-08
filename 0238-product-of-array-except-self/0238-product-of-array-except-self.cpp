class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        int mul=1;
        int count=1;
        int index=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0&&count==1)
            {
             index=i;
             count++;
            }
            else
            {
                mul=mul*nums[i];
            }
        }
        if(index==-1)
        {
          for(int i=0;i<nums.size();i++)
          {
             v.push_back(mul/nums[i]);
          }
        }
        else
        {
            for(int i=0;i<nums.size();i++)
          {
             if(i==index)
             {
                  v.push_back(mul);
             }
             else
             {
                v.push_back(0);
             }
          }
        }
        return v;
    }

};
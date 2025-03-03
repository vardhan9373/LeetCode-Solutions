class Solution {
public:
    string largestNumber(vector<int>& nums) {
     vector<string>v;
     string str;
     int count0=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        count0++;
      v.push_back(to_string(nums[i]));
    }

    for(int i=0;i<v.size()-1;i++)
    { 
        for(int j=i+1;j<v.size();j++)
        {
            if((v[j]+v[i])>v[i]+v[j])
            {
                swap(v[i],v[j]);
            }
        }

    }
    for(int i=0;i<nums.size();i++)
    {
     str+=v[i];
    }
    
    if(count0==nums.size())
    return "0";

    return str;
    }
   
};
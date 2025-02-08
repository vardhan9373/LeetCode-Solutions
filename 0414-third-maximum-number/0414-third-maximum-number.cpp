class Solution {
public:
    int thirdMax(vector<int>& nums) {
          map<int,int>m;
    vector<int>v;
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }
    for(auto it:m)
    {
        v.push_back(it.first);
    }
     if(v.size()==1)
    {
        return v[0];
    }
    else if(v.size()==2)
    {
      return v[v.size()-1];
    }
    else{
        return v[v.size()-3];
    }
    
    }
};
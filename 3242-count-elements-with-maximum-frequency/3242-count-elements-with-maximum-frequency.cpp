class Solution {
public:
    int maxFrequencyElements(vector<int>& arr) {
        map<int,int>m;
       int max= -1;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
       
       for(auto it:m)
       {
         if(it.second>max)
         {
            max=it.second;
         }
       }
        for(auto it:m)
       {
         if(it.second==max)
         {
           count++;
         }
       }

       return count*max;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>v;
        int i=0;
        int j=0;
        int max=INT_MIN;
        if(s.size()==0)
        return 0;
        while(j<s.size())
        {
            if(v.insert(s[j]).second)
            {
                if(j-i+1>max)
                {
                  max=j-i+1;
                }
                j++;
            }
            else
            {
                while(v.insert(s[j]).second!=true)
                {
                    v.erase(s[i]);
                    i++;
                }
               j++;
            }
        }
        return max;
    }
};
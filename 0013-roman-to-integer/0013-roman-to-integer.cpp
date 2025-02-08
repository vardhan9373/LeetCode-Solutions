class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        vector<int>v;
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                v.push_back(1);
                  
            }
            else if(s[i]=='V')
            {
                v.push_back(5);
            }
            else if(s[i]=='X')
            {
                  v.push_back(10);
            }
            else if(s[i]=='L')
            {
                    v.push_back(50);
            }
            else if(s[i]=='C')
            {
                  v.push_back(100);
            }
            else if(s[i]=='D')
            {
                v.push_back(500);
            }
            else if(s[i]=='M')
            {
                v.push_back(1000);
            }
        }
        int m=v.size();
        for(int i=0;i<m;i++)
        {
          if(i==n-1||v[i]>=v[i+1])
          {
            res+=v[i];
          }
          else
          {
            res-=v[i];
          }
        }
        return res;
    }

};
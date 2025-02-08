class Solution {
public:
 int c=0,k=0;
char v[20],r[20];
    bool buddyStrings(string s, string goal) {

        if(s.size()!=goal.size())
        {
            return false;
        }
       for(int i=0;i<s.size();i++)
       {

            if(s[i]!=goal[i])
            {
                c++;
                if(c<3)
                {
                    v[k]=s[i];
                    r[k]=goal[i];
                    k++;
                }
            }
       }
        if(c==0)
        {
            unordered_set <char> xx; 
           for(int j=0;j<s.size();j++)
            {
                auto result=xx.insert(s[j]);
                if(result.second==false)
                {
                  return true; 
                }
               
            }
          
            return false;
        }
        else if(c==2)
        {
         if(v[0]==r[1]&&v[1]==r[0])
         {
             return true;
         }
         else {
             return false;
         }
        }
        else 
        {
             return false;
        }
    }
};
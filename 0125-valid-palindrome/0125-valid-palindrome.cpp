class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            str+=s[i];
        }
        if(str.size()==0)
        {
            return true;
        }
     
          for (char &c : str) {
              c = tolower(c);
           }
             //cout<<str;
       int n=str.size();
      
        for(int i=0;i<n/2;i++)
        {
           if(str[i]!=str[n-i-1])
               return false;
           
          
        }
        return true;
    }
};
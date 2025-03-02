class Solution {
public:
    string reverseWords(string s) {
     vector<string>a;
     string str="";
     string rev;
    
     for(int i=0;i<s.size();i++)
     {
         if(s[i]==' '&&str!="")
         {
            a.push_back(str);
            str="";
         }
         else if(s[i]!=' ')
         {

            str+=s[i];
         }
     }  
     if(str!="")
     a.push_back(str);
 for(int i=0;i<a.size();i++)
 {
    cout<<a[i]<<"\n";
 }


     for(int i=a.size()-1;i>=0;i--)
     {
        rev+=a[i];
        if(i!=0)
        {
            rev+=" ";
        }
     }
  
       return rev;
    }
};
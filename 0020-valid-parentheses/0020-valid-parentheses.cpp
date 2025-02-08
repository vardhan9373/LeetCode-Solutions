class Solution {
public:
    bool isValid(string s) {
        stack<char>v;
         int i=0;
while(s[i]!='\0')
{ 
   if(s[i]=='('||s[i]=='{'||s[i]=='[')
   {
      v.push(s[i]);
   }
   else if(s[i]==')'||s[i]=='}'||s[i]==']')
   {
        if(v.empty())
        {
            return false;
        }
      char x;
      x=v.top();
      v.pop();
      if((x=='('&&s[i]==')')||(x=='{'&&s[i]=='}')||(x=='['&&s[i]==']'))
      {
        i++;
       
      continue;
      }
      else
      {
        return false;
      }
   }
   i++;
}
if(v.empty())
{
    return true;
}
else
{
  return false;
}
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        int v=x;
        double rev=0,m;
        while(x>0)
        {
            m=x%10;
            x=x/10;
            rev=rev*10+m;
        }
        if(rev==v)
        {
            return true;
        }
        else{
            return false;
        }

    }
};
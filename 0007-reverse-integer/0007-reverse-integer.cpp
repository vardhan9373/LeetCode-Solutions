class Solution {
public:
    int reverse(int x) {
         double reverse=0,m;
         if(x>INT_MAX||x<INT_MIN)
         {
             return 0;
         }
         if(x<0&&x>INT_MIN)
         {
             x=x*(-1);
         while(x>0)
       {
           m=x%10;
           x=x/10;
          if(reverse*10>INT_MAX)
         {
             return 0;
         }
         else{
               reverse = reverse*10+m;
         }
       }
        return (-1)*reverse;
         }
       while(x>0)
       {
           m=x%10;
            x=x/10;
        if(reverse*10>INT_MAX)
         {
             return 0;
         }
         else{
               reverse = reverse*10+m;
         }
       }
       return reverse;
    }
};
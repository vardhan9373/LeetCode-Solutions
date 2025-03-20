// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      int start=1;
      int end=n;
      while(start<=end)
      {
       int mid=(start-end)/2+end;
        if(isBadVersion(mid)==true&&isBadVersion(mid-1)==false)
        {
            return mid;
        }
        else if(isBadVersion(mid)==true)
        {
            end=mid-1;
        }
        else if(isBadVersion(mid)==false)
        {
            start=mid+1;
        }
      }
      return -1;
    }
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
      if(n==1)
      {
        return 0;
      }
        for(int i=0;i<n;i++)
        {
            if(i==0&&arr[i]>arr[i+1])
            {
                 return i;
            }
            else if(i==n-1&&arr[i]>arr[i-1])
            {
                 return i;
            }
            else if(i==0||i==n-1)
            {
                continue;
            }
            else if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
            {
                return i;
            }
        }
        return 0;
    }
};
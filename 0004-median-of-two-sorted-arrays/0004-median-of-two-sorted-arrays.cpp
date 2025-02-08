class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>v;
        double d;
        int m=nums1.size();
         int n=nums2.size();
         for(int i=0;i<m;i++)
         {
            v.push_back(nums1[i]);
         }
         for(int i=0;i<n;i++)
         {
            v.push_back(nums2[i]);
         }

        sort(v.begin(), v.end());
        n=v.size();
         if(n%2==0)
         {
            double mid=n/2;
            d=(v[mid-1]+v[mid])/2;
         }
         else
         {
            d=v[n/2];
         }
   return d;
    }      
};
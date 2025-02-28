class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int i=0,j=0;
        int max=INT_MIN;
        int sum=0;
        while(j<nums.size())
        {
            sum=sum+nums[j];
            
            if(sum>max)
            {
                max=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
             j++;
        }
        return max;
    }
};
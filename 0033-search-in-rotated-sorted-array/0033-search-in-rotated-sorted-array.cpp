class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
           if(nums[start]==target)
           {
            return start;
           }
           else if(nums[end]==target)
           {
            return end;
           }
           start++;
           end--;
        }
        return -1;
    }
};
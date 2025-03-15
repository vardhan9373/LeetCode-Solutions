class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left=0;
        int right=height.size()-1;
       int maxArea=0;
       int length;
       int width=0;
       int area;
        while(left<right)
        {
             width=right-left;
             length=min(height[right],height[left]);
             area=width*length;
            maxArea=max(maxArea,area);
            if(height[left]<=height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;

    }
};
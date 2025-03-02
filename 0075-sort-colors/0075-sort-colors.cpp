class Solution {
public:
    void sortColors(vector<int>& arr) {
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
               count0++;
            }
            else if(arr[i]==1)
            {
                count1++;
            }
            else if(arr[i]==2)
            {
                count2++;
            }
        }
        int index=0;
        for(int i=0;i<count0;i++)
        {
            arr[index++]=0;
        }
         for(int i=0;i<count1;i++)
        {
            arr[index++]=1;
        }
         for(int i=0;i<count2;i++)
        {
            arr[index++]=2;
        }
    }
    
};
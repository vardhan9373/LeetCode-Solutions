class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int count0=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                count0++;
            }
        }
       int index=0;
       for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0)
            {
                arr[index++]=arr[i];
            }
        }
        for(int i=0;i<count0;i++)
        {
            arr[index++]=0;
        }


    }
};
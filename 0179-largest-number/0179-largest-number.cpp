class Solution {
public:

   void divide(vector<string>&v,int start,int end)
   {
      if(start==end)
      return;
    
    int mid=(start+end)/2;
    divide(v,start,mid);
    divide(v,mid+1,end);
    mergeSort(v,start,mid,end);

   }
   void mergeSort(vector<string>&v,int start,int mid,int end)
   {
       string arr[end-start+1];
       int i=start;
       int j=mid+1;
        int index=0;
        while(i<=mid&&j<=end)
        {
            if((v[i]+v[j])>(v[j]+v[i]))
            {
                //cout<<"HI";
                arr[index++]=v[i++];
            }
            else
            {
                //<<"BYE";
                arr[index++]=v[j++]; 
            }
        }
        while(i<=mid)
        {
           arr[index++]=v[i++];
        }
        
        while(j<=end)
        {
           arr[index++]=v[j++];
        }
       index=0;
       for(int k=start;k<=end;k++)
       {
        v[k]=arr[index++];
       }

   }


    string largestNumber(vector<int>& nums) {
     vector<string>v;
     string str;
     int count0=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        count0++;
      v.push_back(to_string(nums[i]));
    }
    
      if(count0==nums.size())
    return "0";

    divide(v,0,nums.size()-1);


    // for(int i=0;i<v.size()-1;i++)
    // { 
    //     for(int j=i+1;j<v.size();j++)
    //     {
    //         if((v[j]+v[i])>v[i]+v[j])
    //         {
    //             swap(v[i],v[j]);
    //         }
    //     }

    // }
    for(int i=0;i<nums.size();i++)
    {
     str+=v[i];
    }
  

    return str;
    }
   
};
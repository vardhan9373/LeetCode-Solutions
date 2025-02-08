class Solution {
    public void rotate(int[] nums, int k) {
        List<Integer>list=new ArrayList<>();
       int n=nums.length;
       int j=k%n;
       int v;
       if(j==0)
       {
        return;
       }
         v=n-j;
       
       for(int i=0;i<n;i++)
       {
           list.add(nums[v]);

           if(v==n-1)
           {
              v=0; 
              continue;
           }
            
           v++;

       }

       for(int i=0;i<n;i++)
       {
        nums[i]=list.get(i);
       }
    }
}
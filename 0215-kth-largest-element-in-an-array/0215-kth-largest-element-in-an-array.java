class Solution {
    public int findKthLargest(int[] nums, int k) {
        Queue<Integer>queue=new PriorityQueue<>();
        for(int num: nums)
        {
             queue.add(num);
            if(queue.size()>k)
            {
               queue.remove(); 
            }
           
        }
        return queue.peek();
    }
}
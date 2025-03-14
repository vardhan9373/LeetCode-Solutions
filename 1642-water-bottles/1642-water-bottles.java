class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        int rem=0;
        int div=0;
        while(numBottles/numExchange>=1)
        {
               div=numBottles/numExchange;
               total+=div;
               rem=numBottles%numExchange;
               numBottles=div+rem;
        }
        return total;
    }
}
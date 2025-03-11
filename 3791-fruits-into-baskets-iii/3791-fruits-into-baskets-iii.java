class Solution {
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        int unp = 0;
        int max = 0;
        int n1=fruits.length;
        int n2=baskets.length;
        
        if(n1==n2)
        {
            int count=0;
           for(int i=0;i<n1;i++)
           {
              if(fruits[i]!=baskets[n2-i-1])
              {
                  count=1;
                  break;
              }
           }
           if(count==0)
           return 0;
        }
        

        List<Integer> list = new ArrayList<>();
        for(int j = 0 ; j < baskets.length ;j++){
            list.add(baskets[j]);
            max = Math.max(max, baskets[j]);
        }
        for(int i = 0 ; i < fruits.length ; i++){
            if(fruits[i] > max){
                unp++;
                continue;
            }
            boolean placed = false;
            for(int j = 0 ; j < list.size() ; j++){
                if(list.get(j) >= fruits[i]){
                    list.remove(j);
                    placed = true;
                    break;
                }
            }
            if(!placed) unp++;
        }
        return unp;

    }
}
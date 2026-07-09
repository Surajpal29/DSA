class Solution {
  public:
  
    int minSteps(int d) {
        // code here
        int sum=0;
        int steps=0;
        
        while(sum<d){
            steps++;
            sum+=steps;
        }
        
        while((sum-d)%2!=0){
            steps++;
            sum+=steps;
        }
        return steps;
    }
};
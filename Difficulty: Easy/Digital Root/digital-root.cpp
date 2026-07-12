class Solution {
  public:
  
    int helper(int n,int sum){
        if(n<10) return n;
        if(n>9){
            while(n!=0){
                int rem=n%10;
                n=n/10;
                sum+=rem;
            }
            if(sum>9) return helper(sum,0);
        }
        return sum;
    }
    int digitalRoot(int n) {
        // code here
        return helper(n,0);
    }
};
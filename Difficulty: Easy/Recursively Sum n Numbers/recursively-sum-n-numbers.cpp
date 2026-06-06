class Solution {
  public:
    int recursiveSum(int n) {
        // Recursively sum from 1 to n and return
        // code here
        if(n<=0) return 0;
        if(n==1) return 1;
        return n+recursiveSum(n-1);
    }
};
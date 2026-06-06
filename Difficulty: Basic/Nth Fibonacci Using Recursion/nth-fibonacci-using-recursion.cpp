class Solution {
  public:
    
    int nthFibonacci(int n) {
        // code here
        if(n==0 || n==1) return n;
        
        int fnm1=nthFibonacci(n-1);
        int fnm2=nthFibonacci(n-2);
        int fn=fnm1+fnm2;
        return fn;
        
    }
};
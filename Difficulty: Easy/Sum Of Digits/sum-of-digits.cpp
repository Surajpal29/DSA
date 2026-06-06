class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        if(n<=1) return n;
        
        return (n%10)+sumOfDigits(n/10);
    }
};
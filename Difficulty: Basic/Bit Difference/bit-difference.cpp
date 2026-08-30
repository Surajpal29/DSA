class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        return __builtin_popcount(a^b);
    }
};
class Solution {
  public:
    int makeZero(int n) {
        // code here
       return n & 0xaaaaaaaa;
    }
};
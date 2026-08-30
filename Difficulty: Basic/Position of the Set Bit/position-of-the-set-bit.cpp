class Solution {
  public:
    int findPosition(int n) {
        // code here
        if(__builtin_popcount(n)>1) return -1;
        int cnt=1;
        while(n>0){
           if(n&1) return cnt;
           n>>=1;
           cnt++;
        }
        return -1;
    }
};
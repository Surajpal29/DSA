class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int ans=0;
        while(n>0){
            n/=10;
            ans++;
        }
        return ans;
    }
};
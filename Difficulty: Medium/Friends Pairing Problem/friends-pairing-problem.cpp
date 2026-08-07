class Solution {
  public:
    int helper(int n){
        if(n<=2) return n;
        return helper(n-1)+(n-1)*helper(n-2);
    }
    int countFriendsPairings(int n) {
        // code here
        return helper(n);
    }
};

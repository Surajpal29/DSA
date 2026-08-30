class Solution {
  public:
    string getBinaryRep(int n) {
        // Code here
        string ans="";
        for(int i=31;i>=0;i--){
            int bit=(n>>i)&1;
            ans+=to_string(bit);
        }
        return ans;
    }
};
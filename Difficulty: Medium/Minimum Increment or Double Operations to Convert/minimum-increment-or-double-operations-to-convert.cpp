class Solution {
  public:
    int countMinOperations(vector<int>& arr) {
        // code here
        int inc=0,maxbits=0;
        
        for(int x:arr){
            inc+=__builtin_popcount(x);
            if(x>0){
                int bits=32-__builtin_clz(x);
                 maxbits=max(maxbits,bits);
            }
        }
        return inc+(maxbits?maxbits-1:0);
    }
};
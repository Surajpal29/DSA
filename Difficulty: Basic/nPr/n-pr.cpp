// User function Template for C++

class Solution {
  public: 
  
    long long nPr(int n, int r) {
        // code here
      long long res=1;
      for(int i=0;i<r;i++){
          res=res*(n-i);
      }
        return res;
    }
};
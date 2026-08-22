class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
      int n=s1.size();
      int i=0,j=0;
      while(i<n && j<s2.length()){
          if(s1[i]==s2[j]){
              i++;
              j++;
          }else j++;
      }
      return i==n;
    }
};
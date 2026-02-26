class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        if(a.size()<b.size()) return false;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
           if(a[i]==b[j]) {j++;i++;}
           else i++;
        }
        if(j==b.size()) return true;
        return false;
    }
};
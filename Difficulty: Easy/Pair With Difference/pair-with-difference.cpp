
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        int i=0,j=1;
        
        while(i<n-1 && j<n){
            int diff=arr[j]-arr[i];
            
            if(i!=j && diff==x) return true;
            else if(diff<x) j++;
            else i++;
            
            if(i==j) j++;
        }
        return false;
    }
};

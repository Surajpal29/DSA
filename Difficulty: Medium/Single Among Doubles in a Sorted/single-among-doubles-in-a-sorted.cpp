class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
        
        for(int i=1;i<arr.size()-1;i+=2){
            if(arr[i]!=arr[i-1]) return arr[i-1];
        }
        return arr[arr.size()-1];
    }
};
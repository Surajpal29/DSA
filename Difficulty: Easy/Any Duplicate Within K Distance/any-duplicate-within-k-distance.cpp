class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
       unordered_set<int>visited;
       
       for(int i=0;i<arr.size();i++){
          if(visited.count(arr[i])) return true;
          
          visited.insert(arr[i]);
          
          if(i>=k) visited.erase(arr[i-k]);
       }
       return false;
        
    }

};
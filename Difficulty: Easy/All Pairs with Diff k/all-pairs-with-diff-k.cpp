class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        // code here
        int res=0;
        int n=arr.size();
        unordered_map<int,int>map;
        for(auto it:arr) map[it]++;
        
        for(int i=0;i<n;i++){
            if(map.count(arr[i]+k)){
                res+=map[arr[i]+k];
            }
        }
        return res;
    }
};
class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=0;
        int levelsize=1;
        vector<vector<int>>res;
        while(i<n){
            vector<int>level;
            for(int j=0;j<levelsize && i<n;j++){
                level.push_back(arr[i++]);
            }
            sort(level.begin(),level.end());
            res.push_back(level);
            levelsize*=2;
        }
        return res;
    }
};

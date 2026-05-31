class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int platform=0,maxplatform=0;
        int i=0,j=0;
        
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                platform++;
                i++;
            }else{
                platform--;
                j++;
            }
            maxplatform=max(maxplatform,platform);
        }
        return maxplatform;
    }
};

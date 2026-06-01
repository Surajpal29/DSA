class Solution {
  public:
    bool isPossible(vector<int>&arr,int k,int val){
        int cnt=1;
        int sum=0;
        
        for(int i=0;i<arr.size();i++){
            if((sum+arr[i])<=val){
                sum+=arr[i];
            }else{
                cnt++;
                if(cnt>k || arr[i]>val) return false;
                sum=arr[i];
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        
        // code here
        
        int ans=-1;
        if(k>arr.size()) return ans;
        int low=0;
        int high= std::accumulate(arr.begin(),arr.end(),0);
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(isPossible(arr,k,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
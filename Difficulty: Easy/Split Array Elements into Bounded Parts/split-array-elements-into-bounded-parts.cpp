class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int res=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<=k) res++;
            else{
                int divi=floor(arr[i]/k);
                if(arr[i]%k!=0){
                    res+=divi+1;
                }
                else{
                    res+=divi;
                }
            }
        }
        return res;
    }
};
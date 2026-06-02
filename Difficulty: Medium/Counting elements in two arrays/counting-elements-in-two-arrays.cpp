class Solution {
  public:
    int solve(int val, vector<int> &b,int b_size){
        int low=0,high=b_size-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(b[mid]<=val) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        sort(b.begin(),b.end());
      
        int a_size=a.size();
        int b_size=b.size();
        
        vector<int>ans(a_size);
        
        for(int i=0;i<a_size;i++){
            ans[i]=solve(a[i],b,b_size);
        }
        
        return ans;
    }
};
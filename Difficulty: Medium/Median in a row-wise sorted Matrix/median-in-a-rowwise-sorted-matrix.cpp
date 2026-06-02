class Solution {
  public:
  
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int median_cnt=(n*m+1)/2;
        
        int low=INT_MAX,high=INT_MIN;
        
        for(int i=0;i<n;i++){
            low=min(low,mat[i][0]);
            high=max(high,mat[i][m-1]);
        }
        
        while(low<high){
            int mid=low+(high-low)/2;
            
            int place=0;
            
            for(int i=0;i<n;++i)
                place+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            
            if(place<median_cnt) low=mid+1;
            else high=mid;
        }
       return low; 
    }
};

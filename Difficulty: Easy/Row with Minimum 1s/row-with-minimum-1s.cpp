class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        // code here
        int ans=1;
        int sum=0,min_sum=INT_MAX;
        
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) sum++;
            }
            if(min_sum>sum){
                min_sum=sum;
                ans=i+1;
            }
        }
        return ans;
    }
};
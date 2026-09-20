class Solution {
  public:
    bool binary_Search(int x,vector<int>mat,int size){
        int left=0,right=size-1;
        
        while(left<=right){
            int mid=(left+right)/2;
            if(mat[mid]==x) return true;
            else if(x>mat[mid]) left=mid+1;
            else right=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size(),m=mat[0].size();
        
        for(int i=0;i<n;i++){
            if(x>=mat[i][0] && x<=mat[i][m-1]){
               return binary_Search(x,mat[i],m);
            }
        }
        return false;
    }
};
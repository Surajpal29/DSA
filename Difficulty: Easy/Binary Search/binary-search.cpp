class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int index = 0, f = 0 , l= arr.size()-1, mid= (f+l)/2;
        int ans = -1,flag=0;
        
        while(f<=l){
            mid = (f+l)/2;
            
            if(arr[mid] == k) {ans =  mid; l = mid-1;flag++;}
            else if(arr[mid]>k) l=mid-1;
            else f = mid +1;
        }
        return ans;
    }
};
// User function Template for C++

class Solution {
  public:
    int toyCount(int N, int K, vector<int> arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        int ans=0;
        int i=0;
        while(K>0){
            if(K>=arr[i] && i<N) {
                K-=arr[i++];
                ans++;
            }
            else break;
        }
        return ans;
    }
};
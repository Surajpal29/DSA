class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        
        int i=0,j=d-1;
        while(i<j) swap(arr[i++],arr[j--]);
        
        i=d;
        j=n-1;
        while(i<j)  swap(arr[i++],arr[j--]);
        
        i=0;
        j=n-1;
        while(i<j) swap(arr[i++],arr[j--]);
    }
};
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n-1;i++){
            int minval=arr[i];
            for(int j=i+1;j<n;j++){
                if(minval>arr[j])  {
                    swap(arr[i],arr[j]);
                    minval=arr[i];
                }
            }
        }
    }
};
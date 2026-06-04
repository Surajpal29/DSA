class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
    
        for(int i=1;i<arr.size();i++){
            int k=i;
            while(arr[k]<arr[k-1]){
                swap(arr[k],arr[k-1]);
                k--;
            }
        }
    }
};
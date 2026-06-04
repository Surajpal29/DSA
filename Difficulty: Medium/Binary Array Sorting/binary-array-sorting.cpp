class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
     int n=arr.size();
     int i=0,j=n-1;
     while(i<=j){
         if(arr[i]==1 && arr[j]==0) {
             swap(arr[i++],arr[j--]);
         }
         else if(arr[i]==0 && arr[j]==0) i++;
         else if(arr[i]==1 && arr[j]==1) j--;
         else {
             i++;
             j--;
         }
     }
    }
};

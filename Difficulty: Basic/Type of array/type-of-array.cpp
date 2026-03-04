class Solution {
  public:
    int maxNtype(vector<int>& arr) {
        // code here.
        int order=0,rotated=0;
        order=(arr[0]<arr[1] && arr[1]<arr[2])?1:2;
        for(int i=0;i<arr.size();i++){
            rotated=(order==1 && arr[0]>arr[i])?4:rotated;
            rotated=(order==2 && arr[0]<arr[i])?3:rotated;
        }
        return (rotated>0)?rotated:order;
    }
};
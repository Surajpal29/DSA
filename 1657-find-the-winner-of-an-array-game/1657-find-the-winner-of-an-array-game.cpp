class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size(), win=0,ele=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>ele){
                ele=arr[i];
                win=0;
            }
            if(++win==k) break;
        }
        return ele;
    }
};
class Solution {
  public:
   
    int firstOccurance(vector<int>&arr, int key, int size){
        int start=0,end=size-1;
        
        int mid;
        int ans=-1;
        
        while(start<=end){
            
            mid=start+(end-start)/2;
            
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
            } 
            else if(arr[mid]<key){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>ans(2);
        int n=arr.size();
        
        int firstOcc=firstOccurance(arr,x,n);
        
        if(firstOcc==-1) {ans[0]=-1; ans[1]=-1;}
        else{
            ans[0]=firstOcc;
            while(arr[firstOcc]==x){
                ans[1]=firstOcc++;
                
            }
        }
        return ans;
    }
};
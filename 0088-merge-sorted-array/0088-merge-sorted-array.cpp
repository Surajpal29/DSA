class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>arr;
        int j=0,i=0;
        while(i<m && j<n){
           if(nums1[i]>=nums2[j]){
            arr.push_back(nums2[j]);
            j++;
           }  
           else if(nums1[i]<=nums2[j]){
            arr.push_back(nums1[i]);
            i++;
           }
        }  
        while(i<m){
            arr.push_back(nums1[i++]);
        }  
        while(j<n){
            arr.push_back(nums2[j++]);
        }
        nums1=arr;
    }
};
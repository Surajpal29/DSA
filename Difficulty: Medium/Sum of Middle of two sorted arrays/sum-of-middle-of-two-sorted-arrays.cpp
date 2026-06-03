class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
       vector<int>temp(arr1.size()+arr2.size());
       for(int i=0;i<arr1.size();i++){
           temp[i]=arr1[i];
           temp[i+arr1.size()]=arr2[i];
       }
       sort(temp.begin(),temp.end());
       int mid=(temp.size()-1)/2;
       return temp[mid]+temp[mid+1];
    }
};
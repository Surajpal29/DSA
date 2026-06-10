class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int>arr;
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            st.push(arr[i]);
        }
    }
};

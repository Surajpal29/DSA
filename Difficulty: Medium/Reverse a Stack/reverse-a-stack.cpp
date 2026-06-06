class Solution {
  public:
   
    void insertAtBottom(stack<int>&st,int element){
        if(st.empty()){
            st.push(element);
            return;
        }
        int topelement=st.top();
        st.pop();
        
        insertAtBottom(st,element);
        
        st.push(topelement);
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()) return;
        
        int temp=st.top();
        st.pop();
        
        reverseStack(st);
        
        insertAtBottom(st,temp);
    }
};
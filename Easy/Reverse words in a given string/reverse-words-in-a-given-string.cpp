//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string>st;
        int i=0;
        string temp="";
        while(i<S.size()){
            if(S[i]!='.') temp+=S[i++];
            if(S[i]=='.'){
                st.push(temp);
                temp="";
                i++;
            }
            if(i==S.size()) st.push(temp);
        }
        S="";
        while(!st.empty()){
            S+=st.top();
            if(st.size()>1)  S+='.';
            st.pop();
        }
        
        return S;
       
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
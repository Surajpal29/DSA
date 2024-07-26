//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        if(str.size()<26) return false;
        set<char>s;
        int cnt=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!=' ') 
            {
                s.insert(str[i]);
                cnt++;
            }
        }
        if(cnt<26) return false;
        int setsize=s.size();
        // cout<<setsize;
        if(setsize+k>25) return true;
        else return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
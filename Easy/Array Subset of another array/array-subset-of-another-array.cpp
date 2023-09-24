//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    vector<int>a,b;
    for(int i=0;i<n;i++){
        a.push_back(a1[i]);
    }
    for(int i=0;i<m;i++){
        b.push_back(a2[i]);
    }
    for(int i:b){
        if(find(a.begin(),a.end(),i)==a.end()) return "No";
        else{
            a.erase(find(a.begin(),a.end(),i));
        }
    }
    return "Yes";
}
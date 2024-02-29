//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	   std::unordered_map<int, int> mpp;

    // Populate the unordered_map with array elements and their indices
    for (int i = 0; i < n; i++) {
        mpp[arr[i]] = i;
    }

    // Check for two candidates with sum equal to x
    for (int i = 0; i < n; i++) {
        int num = x - arr[i];
        if (mpp.find(num) != mpp.end() && mpp[num] != i) {
            return true;
        }
    }

    return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends
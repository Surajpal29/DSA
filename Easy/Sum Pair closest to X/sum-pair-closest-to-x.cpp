//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
          int n = arr.size() - 1;
        int left = 0;
        int right = n;
        int diff = INT_MAX;
        vector<int> output;

        sort(arr.begin(), arr.end());

        while (left < right) {
            int sum = arr[left] + arr[right];
            int curdiff = abs(sum - x);

            if (curdiff < diff) {
                diff = curdiff;
                output.clear();
                output.push_back(arr[left]);
                output.push_back(arr[right]);
            }

            if (sum == x) return output;
            if (sum > x) {
                right--;
            } else {
                left++;
            }
        }

        return output;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>a,b;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            b.push_back(arr[i]);
	        }else{
	            a.push_back(arr[i]);
	        }
	    }
	   int i=0,j=0,k=0;
	   while(i<a.size() && j<b.size()){
	       arr[k]=a[i];
	       k++;
	       arr[k]=b[i];
	       k++;
	       i++;
	       j++;
	   }
	   while(i<a.size()){
	       arr[k++]=a[i++];
	   }
	   while(j<b.size()){
	       arr[k++]=b[j++];
	   }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
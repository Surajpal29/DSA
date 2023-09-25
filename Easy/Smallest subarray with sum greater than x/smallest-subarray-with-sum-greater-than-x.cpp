//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here  
        int currsum=0,minlength=n+1;
        int start=0,end=0;
        while(end<n){
            while(currsum<=x && end<n){
                currsum+=arr[end++];
            }
            while(currsum>x && start<n){
                if(minlength>end-start)
                    minlength=end-start;
                
                currsum-=arr[start++];
            }
        }
        if(minlength>n) return 0;
        return minlength;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends
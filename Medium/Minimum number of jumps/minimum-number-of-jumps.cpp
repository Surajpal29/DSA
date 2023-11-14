//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n<=1) return 0;
        int coverage=0,jump=0,lastjumpindex=0;
         //coverage represents the available options to jump
        for(int i=0;i<n;i++){
            coverage=max(coverage,i+arr[i]);
            if(i==lastjumpindex){
                jump++;
                lastjumpindex=coverage;
                if(coverage>=n-1) return jump;//if reached at element with val=0
                if(i>=n-1) return -1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
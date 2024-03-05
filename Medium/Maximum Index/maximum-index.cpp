//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
    
          int maxi[n];
        int mini[n];
        maxi[n-1]=a[n-1];
        mini[0]=a[0];
        for(int i=n-2; i>=0; i--){
            maxi[i]=max(maxi[i+1],a[i]);
        }
        for(int i=1; i<n; i++){
            mini[i]=min(mini[i-1],a[i]);
        }
        
        int ans =-1;
        int i=0;
        int j=0;
        
        while(i<n and j<n){
            if(mini[i]<=maxi[j]){
                ans=max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends
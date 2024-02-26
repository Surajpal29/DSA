//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        string fst="",snd="";
        if(n==0) return 0;
        if(n==1) return arr[0];
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            fst+=to_string(arr[i]);
            i++;
            if(i<n) snd+=to_string(arr[i]);
        }
        
        return stoll(fst)+stoll(snd);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
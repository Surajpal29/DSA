//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int solve(vector<int>&arr,int k,int ind){
        if(arr.size()==1) return arr[0];
        ind=(ind+k)%arr.size();
        arr.erase(arr.begin()+ind);
        solve(arr,k,ind);
    }
    int josephus(int n, int k)
    {
       //Your code here
       vector<int>arr;
       for(int i=1;i<=n;i++){
           arr.push_back(i);
       }
       return solve(arr,k-1,0);
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends
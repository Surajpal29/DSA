//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int m=1e9+7;
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        if(n==1) return 1;
        if(n==3) return 4;
        if(n==2) return 2;
        long long one=1,two=2,three=4;
        long long sum=0;
        for(int i=4;i<=n;++i){
            sum=(one%m+two%m+three%m)%m;
            one=two%m;
            two=three%m;
            three=sum%m;
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
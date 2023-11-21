//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    // Your code goes here
	   // step 1 : Concatenate the string with itself
	    string s2=s+s;

       // step 2 : remove first and last character from the concatenated string
	    string sub=s2.substr(1,s2.size()-2);

        // step 3 : check whether the original string is present in the substring or not, if present return true else return false;
	    return sub.find(s)!=string::npos;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends